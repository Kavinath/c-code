#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;

}*head,*temp,*newnode;
void create(int n)
{

    for(int i=0;i<n;i++)
    {
       newnode= (struct node* )malloc(sizeof(struct node));
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
            temp = temp->next;
        }
    }
}
void display()
{
  temp=head;
  while(temp!=NULL)
  {
      printf("%d\n",temp->data);
      temp=temp->next;
  }
}
int  count()
{
    int count =0;
  temp=head;
  while(temp!=NULL)
  {
      count++;
      temp=temp->next;
  }
  return count;
}
void insertfront()
{
    struct node*newnode1 = (struct node*)malloc(sizeof(struct node));
    printf("enter the value to be insert @ front: ");
    scanf("%d",&newnode1->data);
    newnode1->next=head;
    head=newnode1;
}
void insertend()
{
    struct node*newnode2 = (struct node*)malloc (sizeof(struct node));
    printf("enter the value to be insert @ End: ");
    scanf("%d",&newnode2->data);
    newnode2->next = NULL;
    temp = head;
    while(temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode2;
}
void insertgivpos()
{
    struct node*newnode3 = (struct node*)malloc(sizeof(struct node));
    int i=0,pos;
    count();
    printf("Enter the position: ");
    scanf("%d",&pos);

    if(pos>n)
    {
        printf("Invalid position \n");
    }
    else
    {
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter the data to be insert : ");
        scanf("%d",&newnode->data);
        newnode3->next = temp->next;
        temp->next = newnode3;
    }
}

int main()
{
    int choice;
     int n;
    printf("enter the size of node: ");
    scanf("%d",&n);

    while(1)
    {
    printf("1 = create node \n");
    printf("2 = display node \n");
    printf("3 = count node \n");
    printf("4 = Insert @ front \n");
    printf("5 = Insert @ End \n");
    printf("6 = Insert @ given position \n");
    printf("enter your choice :");
    scanf("%d",&choice);
     switch (choice)
    {
        case 1 : create(n);
        break;
        case 2 : display();
        break;
        case 3 : count();
        break;
        case 4 : insertfront();
        break;
        case 5 : insertend();
        break;
        case 6 : insertgivpos(n);
        break;
        default :
            printf("enter the valid choice\n");
            break;

    }
    }
}
