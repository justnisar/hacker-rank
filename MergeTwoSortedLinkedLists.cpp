/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL)
        return headB;
    if(headB == NULL)
        return headA;
    struct Node *head = NULL;
    struct Node *p,*current;
    while(headA != NULL && headB != NULL)
    {
        p = new Node;
        p->next = NULL;
        if(headA->data < headB->data)
        {
            p->data = headA->data;
            if(head == NULL)
            {
                head = current = p;
            }
            else
            {
                current->next = p;
                current = p;
            }
            headA = headA->next;
        }
        else
        {
            p->data = headB->data;
            if(head == NULL)
            {
                head = current = p;
            }
            else
            {
                current->next = p;
                current = p;
            }
            headB = headB->next;
        }

    }
    if(headA != NULL)
        current->next = headA;
    if(headB != NULL)
        current->next = headB;
    return head;
}
