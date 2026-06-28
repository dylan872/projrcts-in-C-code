#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the node structure
typedef struct Node {
    int value;
    struct Node* next;
} Node;

// Global head and tail pointers
Node* head = NULL;
Node* tail = NULL;

// Function to remove a value from the list
bool Remove(int value) {
    // Case 1: Empty list
    if (head == NULL) {
        return false;
    }

    Node* n = head;

    // Case 2 or 3: Value is at the head
    if (n->value == value) {
        if (head == tail) {
            // Case 2: Only one node
            free(head);
            head = NULL;
            tail = NULL;
        } else {
            // Case 3: More than one node
            head = head->next;
            free(n);
        }
        return true;
    }

    // Traverse the list to find the node before the target
    while (n->next != NULL && n->next->value != value) {
        n = n->next;
    }

    // Case 6: Not found
    if (n->next == NULL) {
        return false;
    }

    Node* temp = n->next;

    // Case 4: Removing tail
    if (temp == tail) {
        tail = n;
    }

    // Case 5: Middle node
    n->next = temp->next;
    free(temp);
    return true;
}
int main()
{
    
return 0;
}