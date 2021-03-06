#[export]
reg.mle.lda <- function(xnew, x, ina, lambda) {
    s <- crossprod(x)
    ni <- tabulate(ina)
    dm <- dim(x)
    k <- length(ni)
    denom <- dm[1] - k
    prior <- 2 * log(ni/dm[1])
    mi <- rowsum(x, ina)
    for (i in 1:k) s <- s - tcrossprod(mi[i, ])/ni[i]
    a <- eigen(s)
    u <- a$vectors
    tu <- t(u)
    u <- denom * u
    lam <- a$values
   
    if ( !is.matrix(xnew) )  dim(xnew) <- c(1, dm[2])
    score <- matrix(0, dim(xnew)[1], k)
    xnew <- t(xnew)
    mi <- mi/ni
    mat <- matrix( NA, dim(xnew)[2], length(lambda) )

    for ( j in 1:length(lambda) ) {
	down <- lam + lambda[j] 
      sinv <- u %*%( tu / down ) 
	ds <- 0.5 * sum( log(down) )
      for (i in 1:k) {
        y <- xnew - mi[i, ]
        score[, i] <- Rfast::colsums(y * crossprod(sinv, y)) - prior[i] - ds
      }
      mat[, j] <- Rfast::rowMins(score)
    }
  colnames(mat) <- lambda
  mat 
}




#[export]
regmlelda.cv <- function(x, ina, lambda = seq(0, 1, by = 0.1), folds = NULL, nfolds = 10, 
                      stratified = TRUE, seed = FALSE, pred.ret = FALSE) {
  
  ina <- as.numeric(ina)
  if ( is.null(folds) ) { 
    folds <- makefolds(ina, nfolds = nfolds, stratified = stratified, seed = seed)
  } 
  nfolds <- length(folds)
  crit <- matrix( nrow = nfolds, ncol = length(lambda) )
  preds <- NULL
  if ( pred.ret ) {
    names <- paste("Fold", 1:nfolds)
    preds <- sapply(names, function(x) NULL)
  }

  for (i in 1:nfolds) {  
    inatest <- ina[ folds[[i] ] ] 
    xtest <- x[folds[[ i ]], ]  
    inatrain <- ina[ - folds[[ i ]] ] 
    xtrain <- x[ - folds[[ i ]], ]  
    if (pred.ret) { 
      preds[[ i ]] <- Rfast2::reg.mle.lda(xtest, xtrain, inatrain, lambda = lambda)  
	be <- preds[[ i ]] -  inatest  ## afaireis apo kath sthlh to ytes
    } else  be <- Rfast2::reg.mle.lda(xtest, xtrain, inatrain, lambda = lambda) - inatest 
    crit[i, ] <- Rfast::colmeans( be == 0 )  ## pososto swstn se tkathe sthlh
  }
  
  if ( !pred.ret )  preds <- NULL
  list( preds = preds, crit = Rfast::colmeans(crit) )

}



#[export]
mle.lda <- function(xnew, x, ina) {
  s <- crossprod(x)
  ni <- tabulate(ina)
  dm <- dim(x)
  k <- length( ni )
  denom <- dm[1] - k 
  prior <- 2 * log( ni / dm[1] )
  mi <- rowsum(x, ina) 
  for (i in 1:k)  s <- s - tcrossprod(mi[i, ])/ ni[i]
  sinv <- denom * Rfast::spdinv(s)
  if ( !is.matrix(xnew) )  dim(xnew) <- c(1, dm[2])
  score <- matrix(0, k, dim(xnew)[1])
  xnew <- t(xnew)
  mi <- mi / ni
  for (i in 1:k) {
    y <- xnew - mi[i, ]
    score[i, ] <- Rfast::colsums(y * crossprod(sinv, y)) - prior[i]
  }
  Rfast::colMins(score)
}