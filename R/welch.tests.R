welch.tests <- function (y, x, logged = FALSE) {
    D <- dim(x)[2]
    stat <- pval <- numeric(D)
    y2 <- y^2
    for (i in 1:D) {
        ina <- x[, i]
        ni <- tabulate(ina)
        ni <- ni[ni > 0]
        k <- length(ni)
        m <- Rfast::group.mean(y, ina)
        s <- Rfast::group.sum(y2, ina)
        s <- (s - m^2 * ni)/(ni - 1)
        w <- ni/s
        W <- sum(w)
        mesi <- sum(w * m)/W
        hi <- (1 - w/W)^2/(ni - 1)
        H <- sum(hi)
        f <- (k^2 - 1)/3/H
        stat[i] <- sum(w * (m - mesi)^2)/(k - 1)/(1 + 2 * (k - 
            2)/(k^2 - 1) * H)
        pval[i] <- pf(stat[i], k - 1, f, lower.tail = FALSE, 
            log.p = logged)
    }
    res <- cbind(stat, pval)
    colnames(res) <- c("F stat", "p-value")
    res
}
