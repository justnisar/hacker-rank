/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    struct Node *head1;
    head1 = new Node;
        head1->data = data;
        head1->next = NULL;
    if(head != NULL)
    head1->next = head;
    
    return head1;
}
