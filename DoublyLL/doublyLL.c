

/* Doubly Linked List Implementation */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head; // global variable - pointer to head

struct Node *GetNewNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void InsertAtHead(int data)
{
    struct Node *newNode = GetNewNode(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void InsertAtTale(int data)
{
    struct Node *newNode = GetNewNode(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    head->next = newNode;
    newNode->next = head;
    head = newNode;
}

void Print()
{
    struct Node *temp = head;
    printf("Forward: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint()
{
    struct Node *temp = head;

    if (temp == NULL) // emty list, exit going to last node
        return;

    while (temp->next != NULL)
        temp = temp->next;

    // Traversing backward using prev pointer
    printf("Reverse: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main()
{
    head = NULL; // empty list

    InsertAtTale(2);
    Print();
    ReversePrint();

    InsertAtTale(4);
    Print();
    ReversePrint();

    InsertAtTale(6);
    Print();
    ReversePrint();

    return 0;
}