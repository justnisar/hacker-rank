package main
import (
    "fmt"
)

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var n int
    fmt.Scanf("%v",&n)
    //const x = n
    //var array[x][x] int
    //var number int
    var left_diagonal int
    var right_diagonal int
    /*
    for i:=0;i<n;i++{
        for j:=0;j<n;j++{
            fmt.Scanf("%v",&number)
            
        }
    }
    */
    array := make([][]int,n)
    var number int
    for i:=0;i<n;i++{
        array[i] = make([]int,n)
        for j:=0;j<n;j++{
            fmt.Scanf("%v",&number)
            array[i][j] = number
            if i==j{
                left_diagonal += array[i][j]
            }
            if i+j == n-1{
                right_diagonal += array[i][j]
            }
        }
    }
    
    if left_diagonal-right_diagonal > 0{
        fmt.Println(left_diagonal-right_diagonal)
    }else{
        fmt.Println(right_diagonal-left_diagonal)
    }
    
}
