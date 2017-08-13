main <- function() {
  a <- as.integer(readline())
  b <- as.integer(readline())
  s <- a + b
  return(cat("SOMA = ", s, sep = ""))
}

if(interactive()) main()
