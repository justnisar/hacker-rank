package main
import "fmt"

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var count int
    fmt.Scanf("%v",&count)
    var positive int
    var negative int
    var zero int
    var number int
    for i:=0;i<count;i++{
        fmt.Scanf("%v",&number)
        if number > 0{
            positive += 1
        }else if number < 0{
            negative += 1
        }else{
            zero += 1
        }
    }
    fmt.Println(float64(positive)/float64(count))
    fmt.Println(float64(negative)/float64(count))
    fmt.Println(float64(zero)/float64(count))
    
}








