#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

int findlength(node** head)
{
    if (*head==0) 
    {
        printf("the list is empty ");
        return 0;
    }
    node*temp=*head;
    int count=0;    
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    return count;
}


int main()
{
     node* newnode;
    node* temp;
    node* head;
    head = NULL;
    temp = head;
    int size;
    printf("enter the number of the nodes : ");
    scanf("%d",&size);
    for (int i=0;i<size;i++)
     {
        newnode = (node*)malloc(sizeof(node));
        if (newnode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

    }
      int x=findlength(&head);
      printf("the length of  the list is : %d ",x);
      
    return 0;
}