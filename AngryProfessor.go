package main
import "fmt"

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var count,n,k,number,sum int
    fmt.Scanf("%v",&count)
    for j:=0;j<count;j++{
        sum = 0
        fmt.Scanf("%v%v",&n,&k)
        for i:=0;i<n;i++{
            fmt.Scanf("%v",&number)
            if number <=0 {
                sum += 1
            }
        }
        if sum >= k{
            fmt.Println("NO")
        }else{
            fmt.Println("YES")
        }    
    }
    
}
