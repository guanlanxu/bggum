% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/color_palettes.R
\name{color_palettes}
\alias{color_palettes}
\alias{okabe_ito}
\alias{tango}
\title{Color palettes provided by \code{bggum}.}
\usage{
okabe_ito(n)

tango(n)
}
\arguments{
\item{n}{An integer vector of length one; the number of colors to return.
If \code{n} is greater than the number of colors in the palette, the
colors will be recycled so that the result is of length \code{n}.}
}
\description{
bggum provides color palettes that can be used with its plotting functions.
The \code{okabe_ito} palette is the eight color, colorblind-friendly palette
from Okabe and Ito (2008).
The \code{tango} palette is comprised of six colors from the Tango palette
(Tango Desktop Project 2013).
}
\section{Palettes provided}{


\describe{
  \item{okabe_ito}{c("#e69f00", "#56b4e9", "#009e73", "#f0e442",
  "#0072b2", "#d55e00", "#cc79a7", "#000000")}
  \item{tango}{c("#cc0000", "#75507b", "#73d216", "#f57900", "#3465a4",
  "#555753")}
}
}

\examples{
## Palettes that are a subset of the total available colors
okabe_ito(3)
tango(3)
## Palettes that need more colors than are available -- leads to recycling
okabe_ito(10)
tango(10)

}
\references{
Okabe, Masataka and Kei Ito. 2008.
  \dQuote{Color Universal Design.}
  \url{https://jfly.uni-koeln.de/color/}.

Tango Desktop Project. 2013.
  \dQuote{Tango Icon Theme Guidelines.}
  \url{https://web.archive.org/web/20160202102503/http://tango.freedesktop.org/Tango_Icon_Theme_Guidelines}
}
