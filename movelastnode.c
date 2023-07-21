#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head = NULL,*temp = NULL,*prev = NULL,*newnode = NULL;
void create()
{
   int n;
  printf("Enter the Size of linked list node: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
     newnode = (struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
             newnode->next=NULL;
        if(head==NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next=newnode;
            temp = newnode;
        }
  }


}
int movelastnode()
{
    if (head->next == NULL)
    {
        return head;
    }
    prev = NULL;
    temp = head;
    while(temp->next->next!= NULL)
    {
        temp = temp->next;
    }
    prev = temp->next;
    prev -> next = head;
    temp->next = NULL;
    head = prev;

}
void display()
{
    temp=head;
  while(temp!=NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  printf("\n");
}
int main()
{
    while(1)
{
   int n;
   printf("1 : create\n");
   printf("2 : movelastnode\n");
   printf("3 : display\n");
   scanf("%d",&n);
   switch(n)
   {
       case 1 : create();
       break;
       case 2 : movelastnode();
       break;
       case 3 : display();
       break;
       default :
       printf("Invalid choice");
   }
}

}
