#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
} node;

void printlist(node* head)
{
   node* temp=head;
   while(temp!=NULL)
   {
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("null");
   void delete();
   delete(&head);
}
void delete(node** head)
{ 
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    node* temp = *head;
    int pos;
    printf("Enter the position after which you want to delete: ");
    scanf("%d", &pos);

    for (int i = 1; temp != NULL && i < pos; i++) {
        temp = temp->next;
    }
    
    // If position is out of bounds
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    // Node to delete
    node* toDelete = temp->next;
    temp->next = toDelete->next; // skip over the node to delete
    free(toDelete); // free the memory of the deleted node
    void printlist();
    printlist(head);
}


int main()
{
    node*head;
    node*temp;
    node*newnode;
    head=0;
    int n;
    printf("enter the  number of  the nodes : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        if (newnode==0) return 1;
        newnode->next=0;
        printf("enter the data you want to enter for %d node : ",i+1);
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }

    }
    printf("the linkedlist before delete is : ");

    printlist(head);

   
    return 0;
}