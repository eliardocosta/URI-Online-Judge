package main
 
import (
    "fmt"
)
 
func main() {
    
    var r float64
    fmt.Scan(&r)
    area := 3.14159*r*r
    fmt.Printf("A=%.4f\n", area)

}
