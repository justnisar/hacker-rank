/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head == NULL)
        return NULL;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    struct Node *current = head;
    while(current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
    
}
