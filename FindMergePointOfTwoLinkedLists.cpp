/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    int l1 = 0;
    int l2 = 0;
    struct Node *h1 = headA;
    struct Node *h2 = headB;
    while(h1)
    {
        l1++;
        h1 = h1->next;
    }
    while(h2)
    {
        l2++;
        h2 = h2->next;
    }
    int l;
    if(l1 > l2)
    {
            l = l1 - l2;
            while(l--)
            headA = headA->next;
    }
    else
    {
           l = l2 - l1;
            while(l--)
            headB = headB->next;

    }
    while(headA!=NULL && headB!=NULL)
    {
        if(headA == headB)
            return headA->data;
        headA = headA->next;
        headB = headB->next;
    }

}
