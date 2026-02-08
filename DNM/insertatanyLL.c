#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

void printlist(node* head) {
    node* temp=head;
    printf("the linked list is : ");
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("null");
}

void insert(node* head)
{
node* floater;
node* new;
int position;
new=(node*)malloc(sizeof(node));
printf("enter the position of insertion : ");
scanf("%d",&position);
floater=head;
for(int i=1;i<position;i++)
{
    floater=floater->next;
}
printf("enter the data of insertion : ");
scanf("%d",&new->data);

new->next=floater->next;
floater->next=new;

printlist(head);

}

int main()
{
    node* head;
    node*  temp;
    node* newnode;
    int n;
    printf("enter the number of the nodes : ");
    scanf("%d",&n);
    head=NULL;
    for (int i=0;i<n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        if (newnode==NULL)
        {
            printf("error ");
            return 1;
        }
        printf("enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL) head=temp=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    insert(head);
    return 0;
}