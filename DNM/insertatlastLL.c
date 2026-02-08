#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

// Function to print the linked list
void printList(node* head) {
    node* temp = head;
    printf("The linked list is: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insert(node* newnode ,node * head)
{
    node* new;
    new=(node*) malloc(sizeof(node));
    printf(" enter the data of new node : ");
    scanf("%d",&new->data);
    newnode->next=new;
    new->next=0;
   
    printList(head);
}
int main() {
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

    // Call the function to print the list
     
    insert(newnode,head);
    return 0;
}
