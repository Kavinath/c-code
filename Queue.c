#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data ;
   struct node*next;
}*front=NULL ,*rear=NULL,*temp,*newnode;
void enqueue()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

}
void display()
{
   temp = front;
   while(temp!= NULL)
   {
       printf("%d ",temp->data);
       temp = temp->next;
   }
   printf("\n");
}
void dequeue()
{
    temp = front;
    if(front==NULL && rear ==NULL)
    {
        printf("No elements in the queue");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}
int main()
{
  printf("1: Enqueue\n");
  printf("2: display\n");
  printf("3: dequeue\n");
  while(1)
  {
        int n;
  scanf("%d",&n);
  switch(n)
  {
      case 1 :  enqueue();
      break;
      case 2 : display();
      break;
      case 3 : dequeue();
      break;
      default :
      printf("Enter the valid option");
  }

  }

}

