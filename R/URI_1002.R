main <- function() {
  r <- as.numeric(readline())
  #r <- as.numeric(r)
  a <- 3.14159*r*r
  return(cat("A=", round(a, 4), sep = ""))
}

if(interactive()) main()
