/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
     }
*/
/*
TreeNode global;
    public Solution(){
        global = null;
    }
    public boolean recfun(TreeNode root,TreeNode prev){
        if(root == null)
            return true;
        boolean a = recfun(root.left,root);
        boolean c;
            if(global == null){
                global = root;
                c = true;
            }
            else if(root.val > global.val){
                global = root;
                c = true;
            }
            else{
                c = false;
            }
        boolean b = recfun(root.right,root);
        return a&&b&&c;
    }
    
    public boolean isValidBST(TreeNode root) {
        if(root == null)
            return true;
        if(root.left == null && root.right == null)
            return true;
        return recfun(root,null);
        
    }

*/
    Node global;
    public boolean recfun(Node root,Node prev){
        if(root == null)
            return true;
        boolean a = recfun(root.left,root);
        boolean c;
            if(global == null){
                global = root;
                c = true;
            }
            else if(root.data > global.data){
                global = root;
                c = true;
            }
            else{
                c = false;
            }
        boolean b = recfun(root.right,root);
        return a&&b&&c;
    }
    boolean checkBST(Node root) {
        if(root == null)
            return true;
        if(root.left == null && root.right == null)
            return true;
        return recfun(root,null);
        
        
        
    }

