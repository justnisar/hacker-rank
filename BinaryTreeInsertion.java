 /* Node is defined as :
 class Node 
    int data;
    Node left;
    Node right;
    
    */

static Node getNode(int data){
    Node node = new Node();
    node.left = null;
    node.right = null;
    node.data = data;
    return node;
}

static Node Insert(Node root,int value)
    {
        if(root == null){
            return getNode(value);
        }
        Node prev = null;
        Node current = root;
        while(current != null){
            prev = current;
            if(value < current.data){
                current = current.left;
            }
            else{
                current = current.right;
            }
             
        }
        if(value < prev.data)
            prev.left = getNode(value);
        else
            prev.right = getNode(value);
        
        return root;
       
    }



