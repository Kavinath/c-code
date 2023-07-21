#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*prev,*del;
void main()
{
    int option;
    while(1)
    {
        printf("1:create\n");
        printf("2:display\n");
        printf("3:alternate\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1 : create();
            break;
            case 2 : display();
            break;
            case 3 : alternate();
            break;
            default:
                printf("Invalid choice\n");
        }
    }
}
void create()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
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
void alternate()
{
    prev=head;
    del=head->next;
    while(prev!=NULL && del!=NULL)
    {
        prev->next=del->next;
        free(del);
        prev=prev->next;
        if(prev!=NULL)
        {
            del=prev->next;
        }
    }
}
