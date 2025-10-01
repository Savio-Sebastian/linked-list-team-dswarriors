#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    printf("Roll Numbers in Linked List: ");
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) {
            printf(" → ");
        }
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert roll numbers (replace with your team roll numbers)
    insertEnd(&head, 101); // Your roll number
    insertEnd(&head, 102); // Teammate 1
    insertEnd(&head, 103); // Teammate 2
    insertEnd(&head, 104); // Teammate 3

    // Display the linked list
    displayList(head);

    return 0;
}
