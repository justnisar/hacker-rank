	/*
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
    static int max(int x,int y){
        if(x > y)
            return x;
        return y;
    }
    
    static int recfun(Node root){
        if(root == null)
            return 0;
        return 1 + max(recfun(root.left),recfun(root.right));
    }

	static int height(Node root) {
      	if(root == null)
               return 0;
        return recfun(root) - 1;
    }

