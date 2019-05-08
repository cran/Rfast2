\name{MLE of the Kumaraswamy distribution}
\alias{kumar.mle}

\title{
MLE of the Kumaraswamy distribution}

\description{
MLE of the Kumaraswamy distribution.
}

\usage{
kumar.mle(x, tol = 1e-07, maxiters = 50)
}

\arguments{
\item{x}{
A vector with proportions or percentages (zeros and ones are not allowed).
}
\item{tol}{
The tolerance level up to which the maximisation stops; set to 1e-09 by default.
}
\item{maxiters}{
The maximum number of iterations the Newton-Raphson will perform. 
}
}

\details{
Instead of maximising the log-likelihood via a numerical optimiser we have used a Newton-Raphson algorithm which is faster. 
See wikipedia for the equations to be solved.    
}

\value{
Usually a list with three elements, but this is not for all cases. 
\item{iters}{The number of iterations required for the Newton-Raphson to converge.
}
\item{param}{
The two parameters (shape and scale) of the Kumaraswamy distribution.
}
\item{loglik}{The value of the maximised log-likelihood.
}
}

\references{
Kumaraswamy, P. (1980). A generalized probability density function for double-bounded random processes. 
Journal of Hydrology. 46 (1-2): 79-88.

Jones, M.C. (2009). Kumaraswamy's distribution: A beta-type distribution with some tractability advantages. 
Statistical Methodology. 6(1): 70-81. 



You can also check the relevant wikipedia page.
}

\author{
Michail Tsagris

R implementation and documentation: Michail Tsagris <mtsagris@yahoo.gr>.
}
%\note{
%%  ~~further notes~~
%}

\seealso{
\code{ \link{zigamma.mle}, \link{censweibull.mle}
}
}

\examples{
u <- runif(1000)
a <- 0.4  ;  b <- 1
x <- ( 1 - (1 - u)^(1/b) )^(1/a)
kumar.mle(x)
}

