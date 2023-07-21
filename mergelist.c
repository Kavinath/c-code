struct node
{
    int data;
    struct node*next;
}head1,tail1,temp,head2,tail2,newnode;

void Create()
{
    newnode = (struct node*)(malloc(sizeof(struct node)));
    //get the data of linked list
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if(head1==NULL)
    {
        head1 = newnode;
        tail1 = newnode;
        temp = newnode;
    }


}
