#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;
 
void printList(node* head) {
    node* temp = head;
    printf("The linked list is: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
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


     
    return 0;
}