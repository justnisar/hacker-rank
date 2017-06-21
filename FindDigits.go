package main
import "fmt"

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var t int
    var n int
    var sum int
    fmt.Scanf("%v",&t)
    for i:=0;i<t;i++{
        sum = 0
        fmt.Scanf("%v",&n)
        var number = n
        for ;n!=0;{
            var remainder int
            remainder = n % 10
            n /= 10
            if remainder != 0 && number % remainder == 0{
                sum += 1
            }
        }
        fmt.Println(sum)
    }
}
