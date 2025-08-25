#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

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

int countOccurrences(struct Node* head, int element) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == element) {
            count++;
        }
        current = current->next;
    }
    return count;
}

int main() {
    struct Node* head = NULL;
    int n, data, element, occurrences;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertEnd(&head, data);
    }

    printf("Enter the element to count occurrences: ");
    scanf("%d", &element);

    occurrences = countOccurrences(head, element);
    printf("The element %d occurs %d times in the linked list.\n", element, occurrences);

    return 0;
}