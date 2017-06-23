    public static Node removeDuplicates(Node head) {
      //Write your code here
        if(head == null || head.next == null)
            return head;
        Node prev = null;
        Node current = head;
        while(current != null){
            if(prev !=null && current.data == prev.data){
                current = current.next;
                prev.next = current;
            }
            else{
                prev = current;
                current = current.next;
            }
        }
        return head;
    }
