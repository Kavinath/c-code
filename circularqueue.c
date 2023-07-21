#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*front = -1,*rear = -1,*temp,*newnode;

void enqueue(int arr[], int n)
{

    temp = front;
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear]= data;
    }
    else if((rear+1)%n== front)
    {
        printf("Queue is full");

    }
    else
    {
        rear= (rear+1)%n;
        arr[rear] = data;
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    enqueue(arr[],n);
}

