//Write your code here
class Calculator{
    int power(int p,int q) throws Exception{
        
        if(p < 0 || q < 0){
            throw new Exception("n and p should be non-negative");
        }
        else{
            return (int)Math.pow(p,q);
        }
        
    }
}
