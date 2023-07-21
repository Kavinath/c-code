#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node*next;

}*head,*temp,*prev,*newnode,*nextnode;
void create()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       newnode = (struct node*)malloc(sizeof(struct node));
       scanf("%d",&newnode->data);
       newnode->next = NULL;
       if(head == NULL)
       {
           head = newnode;
           temp = newnode;
       }
       else
       {
           temp->next = newnode;
           temp = newnode;
       }
    }

}
void display()
{
    temp = head;
    while(temp->next!=NULL)
    {
        printf("%d",temp->next);
        temp = temp->next;

    }
}
void altnode()
{
    int count = 1;
    temp = head;
    while(temp->next!= NULL)
    {

        if(count%2==0)
        {
            count++;
            nextnode= nextnode->next;
        }
        else
        {
            count++;
            prev->next = nextnode;
            prev = prev->next;
            nextnode->next=nextnode;
        }
    }

}
