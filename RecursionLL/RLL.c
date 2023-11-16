

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

void RecursivePrint(struct Node *head)
{
    if (head == NULL) // base condition
        return;
    printf("%d ", head->data);  // first print the value in the code
    RecursivePrint(head->next); // recursive call
}

void ReverseRecursivePrint(struct Node *head)
{
    if (head == NULL) // base condition
    {
        printf("\n");
        return;
    }
    ReverseRecursivePrint(head->next); // recursive call
    printf("%d ", head->data);         // first print the value in the code
}

int main()
{
    struct Node *head = NULL;

    head = AddnewNode(head, 1);
    head = AddnewNode(head, 2);
    head = AddnewNode(head, 3);
    head = AddnewNode(head, 4);

    RecursivePrint(head);
    ReverseRecursivePrint(head);
    return 0;
}