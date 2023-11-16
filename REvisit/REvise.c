#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *GetNewNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

struct Node *AddnewNode(struct Node *head, int data)
{
    struct Node *newNode = GetNewNode(data);
    newNode->next = head;
    head = newNode;

    return head;
}

struct Node *PointAtTheEnd(struct Node *head)
{
    struct Node *current, *next, *prev;
    current = head;
    prev = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void Print(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main()
{
    struct Node *head = NULL;

    head = AddnewNode(head, 2);
    head = AddnewNode(head, 1);
    head = AddnewNode(head, 3);
    head = AddnewNode(head, 4);

    printf("Forward Print...\n");
    Print(head);

    head = PointAtTheEnd(head);

    printf("Reverse Print...\n");
    Print(head);

    return 0;
}