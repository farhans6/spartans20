#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void rotate(struct Node** start, int k)
{
    if (k == 0)
        return;


    struct Node* current = *start;


    int count = 1;
    while (count < k && current != NULL) {
        current = current->next;
        count++;
    }


    if (current == NULL)
        return;


    struct Node* kthNode = current;


    while (current->next != NULL)
        current = current->next;


    current->next = *start;

    *start = kthNode->next;

    kthNode->next = NULL;
}


void push(struct Node** start, int new_data)
{

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


    new_node->data = new_data;


    new_node->next = (*start);


    (*start) = new_node;
}

void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}


int main(void)
{

    struct Node* head = NULL;


    for (int i = 7; i > 0; i -= 1)
        push(&head, i);

    printf("Given linked list \n");
    printList(head);
    rotate(&head, 4);

    printf("\nRotated Linked list \n");
    printList(head);

    return (0);
}
