\name{MLE of the zero inflated logistic normal distribution}
\alias{zil.mle}

\title{MLE of the zero inflated logistic normal distribution
}

\description{
MLE of the zero inflated logistic normal distribution.
}

\usage{
zil.mle(x)
}

\arguments{
\item{x}{
A numerical vector with percentages including 0s.  
}
}

\details{
MLE of the zero inflated logistic normal distribution is performed. 
}

\value{
A list including:
\item{loglik}{
The full log-likelihood of the model.
}
\item{param}{
The parameters of the model, the probability of non zeros, the eman and the unbiased variance.
}
}

\references{
Connie Stewart (2013). Zero-inflated beta distribution for modeling the proportions 
in quantitative fatty acid signature analysis. Journal of Applied Statistics, 40(5): 985-992.
}

\author{
Michail Tsagris

R implementation and documentation: Michail Tsagris <mtsagris@yahoo.gr> 
}

%\note{
%%  ~~further notes~~
%}

\seealso{
\code{ \link{zigamma.mle}
}
}

\examples{
x <- rbeta(300, 4, 10)
x[sample(1:300, 30)] <- 0
zil.mle(x)
}

