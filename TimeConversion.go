package main
import (
    "fmt"
    "strconv"
)

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var input string
    fmt.Scanf("%v",&input)
    var meridian string = input[8:]
    hour,err := strconv.ParseInt(input[0:2],10,64)
    if err != nil{
        fmt.Println("Error")
    }
    
    if hour >= 1 && hour <= 11 && meridian == "AM"{
        fmt.Println(input[0:8])
    }else if hour == 12 && meridian == "AM"{
        fmt.Println("00"+input[2:8])  
    }else if hour >= 1 && hour <= 11 && meridian == "PM"{
        fmt.Println(strconv.FormatInt(12+hour,10) + input[2:8])   
    }else{
        fmt.Println(input[0:8])
    }
    
    
    
    
    
    
    
    
}
