/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
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
    prev = NULL;
    current = head;
    while(current)
    {
        next = current->prev;
        current->prev = prev;
        prev = current;
        current = next;
    }
    return head;
}
