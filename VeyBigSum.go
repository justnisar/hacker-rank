package main
import "fmt"

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var count int
    var sum int
    var number int
    fmt.Scanf("%v",&count)
    for i:=0;i<count;i++{
        fmt.Scanf("%v",&number)
        sum += number
    }
    fmt.Println(sum)
}
