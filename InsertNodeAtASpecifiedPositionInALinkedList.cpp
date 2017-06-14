/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    struct Node *head1;
    head1 = new Node;
    head1->data = data;
    if(position == 0)
    {
        head1->next = head;
        return head1;
    }
    struct Node *current = head,*prev = NULL;
    while(position--)
    {
        prev = current;
        current = current->next;
    }
    
    head1->next = NULL;
    prev->next = head1;
    head1->next = current;
    return head;
}
