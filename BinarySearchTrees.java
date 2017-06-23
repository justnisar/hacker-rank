public static int max(int a,int b){
    if(a > b)
        return a;
    return b;
}

public static int recfun(Node root){
    if(root == null)
            return 0;
        return 1 + max(recfun(root.left),recfun(root.right));
}

public static int getHeight(Node root){
      //Write your code here
        if(root == null)
            return 0;
      return recfun(root) - 1;
    }

