

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *AddnewNode(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
        head = newNode;

    else
    {
        struct Node *currentNode = head;

        while (currentNode->next != NULL)
            currentNode = currentNode->next;
        currentNode->next = newNode;
    }
    return head;
}

struct Node *Reverse(struct Node *head)
{
    struct Node *current, *prev, *next;
    current = head;
    prev = NULL;

    while (current != NULL)
    {
        next = current->next; // store the address of the next node
        current->next = prev; // build the new link to point at the prev node
        prev = current;       // adjust the previous node to be the curreb node
        current = next;
    }
    head = prev;
    return head;
}

void Print(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    printf("List: \n");

    head = AddnewNode(head, 1);
    head = AddnewNode(head, 2);
    head = AddnewNode(head, 3);
    head = AddnewNode(head, 4);

    Print(head);

    head = Reverse(head);

    Print(head);

    return 0;
}