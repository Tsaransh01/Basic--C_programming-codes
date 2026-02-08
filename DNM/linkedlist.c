#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data  ;
    struct node* nextadress; 
} node ;

node* create(int value)  // value will be given by the user.
{
    node* newnode= (node*)malloc(sizeof(node));
    newnode-> data=value; 
    newnode->nextadress=NULL;
    return newnode;
}

void addnode(node** head,int value)
{
    node* newnode=create(value);
    if (*head==NULL) *head=newnode;
    else
    {
        node* temp=*head ;
        while (temp !=NULL)
        {
            printf("%d ->",temp->data);
            temp=temp->nextadress;
        }
    }
}
void print(node*head)
{ 
    node*temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->data;
    }
    printf("\n EXIT ");
}
int main()
{
    node*head=0;
    int n,value;
    printf("enter the number of nodes  : ");
    scanf("%d",&n);
    int i=0;
    while ((n>0))
    {
        printf("enter the data for node %d  : ",i+1);
        scanf("%d",&value);
        addnode(&head,value);
        i++;
        n--;
    }
    printf("the linked list is  : ");
    print(&head);
    
    node*temp;
    while(head!=0)
    {
        temp=head;
        head=head->nextadress;
        free(temp);
    }
return 0;
}

 