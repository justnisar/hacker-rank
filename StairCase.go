package main
import "fmt"

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var n int
    fmt.Scanf("%v",&n)
    for i:=0;i<n;i++{
        for j:=n-1-i;j>0;j--{
            fmt.Print(" ")
        }
        for k:=0;k<=i;k++{
            fmt.Print("#")
        }
        fmt.Println();
    }
}
