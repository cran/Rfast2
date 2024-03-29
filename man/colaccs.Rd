\name{Many binary classification metrics}
\alias{colaccs}
\alias{colsens}
\alias{colspecs}
\alias{colprecs}
\alias{colfscores}
\alias{colfbscores}
\alias{colfmis}
\title{
Many binary classification metrics
}

\description{
Many binary classification metrics.
}

\usage{
colaccs(group, preds)
colsens(group, preds)
colspecs(group, preds)
colprecs(group, preds)
colfscores(group, preds)
colfbscores(group, preds, b)
colfmis(group, preds)
}

\arguments{
\item{group}{
A numerical vector with two values, 0 and 1. 
}
\item{preds}{
A numerical matrix with scores, probabilities or any other measure. 
}
\item{b}{
The \eqn{\beta} parameter in the \eqn{F_{\beta}}-score. 
}
}

\details{
The accuracies, sensitivities, specificities, precisions, F-scores, \eqn{F_{\beta}}-scores 
and the Fowlkes-Mallows index are calculated column-wise. The colaccs is the 
only metric that can be used with a multinomial response as well. 
}

\value{
A vector with length equal to the number of columns of the "preds" argument containing the 
relevant values computed for each column. 
}

\references{
https://en.wikipedia.org/wiki/Sensitivity_and_specificity

https://en.wikipedia.org/wiki/Precision_and_recall
}

\author{
Michail Tsagris.

R implementation and documentation: Michail Tsagris \email{mtsagris@uoc.gr}.
}
%\note{
%%  ~~further notes~~
%}

\seealso{
\code{ \link{colmses}, \link{bernoulli.nb}, \link{bigknn.cv}
}
}

\examples{
## 20 variables, hence 20 accuracies will be calculated
ina <- rbinom(100, 1, 0.6)
x <- matrix( rnorm(100 * 20), ncol = 20 )
a <- colaccs(ina, x)
}
