/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position == 0)
        return head->next;
    struct Node *current = head,*prev = NULL;
    while(position--)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    return head;
}	


