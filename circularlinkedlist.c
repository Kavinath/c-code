#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*next,*current,*prev,*tail;
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
        temp=newnode;
        newnode->next=head;
    }
    }
}
void display()
{
    temp = head;
    while(temp->next!= head)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
}
void reverse()
{
    current=head;
    prev=NULL;
    next=NULL;
    do
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        head=prev;
    }

    while(current!=tail);
}
int main()
{
  create();
  reverse();
  display();
}
