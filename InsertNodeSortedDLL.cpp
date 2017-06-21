/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head == NULL)
    {
                return newnode;
    }
    else if(data < head->data)
    {
        newnode->next = head;
        head->prev = newnode;
        return newnode;
    }
    struct Node *current = head,*prev = NULL;
    while(current!=NULL && data >= current->data)
    {
        prev = current;
        current = current->next;
    }
    prev->next = newnode;
    newnode->prev = prev;
    newnode->next = current;
    
    if(current!=NULL)
        current->prev = newnode;
     
    
    return head;
}
