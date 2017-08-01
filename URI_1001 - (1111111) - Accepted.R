main <- function() {
  a <- readline()
  b <- readline()
  s <- as.integer(a) + as.integer(b)
  return(cat("X =", s))
}

if(interactive()) main()
