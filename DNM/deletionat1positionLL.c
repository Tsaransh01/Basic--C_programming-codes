#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

// Function to print the linked list
void printList(node* head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    
    node* temp = head;
    printf("The linked list is: ");
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete the last node of the linked list
void deleteLast(node** head) {
    if (*head == NULL) {
        printf("The list is empty, nothing to delete.\n");
        return;
    }

    // If there's only one node in the list
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    // Traverse to the second-last node
    node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete the last node
    free(temp->next);
         temp->next = NULL;
}

int main() {
    node* head = NULL;
    node* temp;
    int n;

    // Creating the linked list
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        node* newnode = (node*)malloc(sizeof(node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("\nOriginal ");
    printList(head);

    // Delete the last node and print the list again
    deleteLast(&head);

    printf("\nAfter deleting the last node, ");
    printList(head);

    return 0;
}
