package main
import "fmt"

func display_5(n int){
    for i:=0;i<n;i++{
        fmt.Print("5")
    }
}

func display_3(n int){
    for i:=0;i<n;i++{
        fmt.Print("3")
    }
}
func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var t,n int
    fmt.Scanf("%v",&t)
    var remaining int
    var flag int
    for k:=0;k<t;k++{
        flag = 0
        fmt.Scanf("%v",&n)
        var five_count = n/3
        for i:=five_count;i>=0;i--{
                remaining = n - 3 * i
            if remaining % 5 == 0{
                display_5(i*3)
                display_3(remaining)
                fmt.Println()
                flag = 1
                break
            }
        }
        if flag == 0{
            fmt.Println("-1")    
        }
        
    }
    
    
}
