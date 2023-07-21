#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*newnode,*temp,*tail;
void create(int n)
{
    for(int i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;


    }

}
