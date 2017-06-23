package main
import (
    "fmt"
    "math"
)

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var t int
    var sum int
    fmt.Scanf("%v",&t)
    for ;t>0;{
        sum = 0
        var x,y int
        fmt.Scanf("%v%v",&x,&y)
        var i = int(math.Sqrt(float64(x)))
        for ;i*i<=y;i++{
            if i*i >= x && i*i <= y{
                sum += 1
            }
        }
        t--
        fmt.Println(sum)
    }
}
