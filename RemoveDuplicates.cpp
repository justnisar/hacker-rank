/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head == NULL)
        return head;
    struct Node *current = head;
    while(current->next && current)
    {
        if(current->data != current->next->data)
            current = current->next;
        else
            current->next = current->next->next;
    }
    return head;
}
