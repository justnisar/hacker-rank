/*
   class Node 
       int data;
       Node left;
       Node right;
*/

void leftrecfun(Node root){
    if(root == null){
        return;
    }
    leftrecfun(root.left);
    System.out.print(root.data + " ");
}

void rightrecfun(Node root){
    if(root == null){
        return;
    }
    System.out.print(root.data + " ");
    rightrecfun(root.right);
    
}


void top_view(Node root)
{
   leftrecfun(root.left);
   System.out.print(root.data + " ");
    rightrecfun(root.right);
}

