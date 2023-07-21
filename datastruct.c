#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head,*tail,*temp,*new;
    void create(){
        int n;
        scanf("%d",&n);
        while(n-->0){
                new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
   new->next=NULL;
   if(head==NULL){
        head=new;
   tail=new;
   }
   else{
    tail->next=new;
    tail=new;
   }
        }
    }

    void display(){
        temp=head;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }

void main(){
    create();
    display();

    }
