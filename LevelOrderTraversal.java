	static void levelOrder(Node root){
      //Write your code here
        Queue<Node> queue = new LinkedList<Node>();
        if(root != null)
            queue.add(root);
        while(!queue.isEmpty()){
            Node current = queue.poll();
            System.out.print(current.data + " ");
            if(current.left != null)
                queue.add(current.left);
            if(current.right != null)
                queue.add(current.right);
        }
      
    }
