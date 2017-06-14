/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    struct Node *head1;
    head1 = new Node;
    head1->data = data;
    head1->next = NULL;
    if(head == NULL)
    {
        return head1;
    }
    struct Node *current = head;
    while(current->next)
        current = current->next;
    
    current->next = head1;
    return head;
    
}
