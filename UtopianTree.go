package main
import "fmt"

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var array [61]int
    array[0] = 1
    array[1] = 2
    for i:=2;i<61;i++{
        if i % 2 == 0{
            array[i] = array[i-1] + 1
        }
        if i % 2 == 1{
            array[i] = array[i-1] * 2
        }
    }
    var t int
    fmt.Scanf("%v",&t)
    for i:=0;i<t;i++{
        var n int
        fmt.Scanf("%v",&n)
        fmt.Println(array[n])
    }
    
}
