/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
    struct Node *sptr = head;
    struct Node *fptr = head;

    while(sptr != NULL && fptr != NULL)
    {
        sptr = sptr->next;
        fptr = fptr->next->next;
        if(sptr == fptr)
            return 1;
    }
    return 0;
}
