

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void AddnewNode(int data, int n)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (n == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node *desiredNode = head;

    for (int i = 0; i < n - 2; i++)
        desiredNode = desiredNode->next;

    newNode->next = desiredNode->next;
    desiredNode->next = newNode;
}

void DeleteBV(int value)
{
    struct Node *currentNode = head;

    if (currentNode->data == value)
    {
        head = currentNode->next;
        free(currentNode);
        return;
    }

    while (currentNode != NULL)
    {
        if (currentNode->next->data == value)
        {
            struct Node *desiredNode = currentNode->next;
            currentNode->next = desiredNode->next;
            free(desiredNode);
            return;
        }

        currentNode = currentNode->next;
    }
}

void Print()
{
    struct Node *currentNode = head;

    while (currentNode != NULL)
    {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
}

int main()
{
    head = NULL;

    printf("List: \n");

    AddnewNode(9, 1);
    AddnewNode(5, 2);
    AddnewNode(6, 3);
    AddnewNode(41, 4);
    AddnewNode(-8, 5);

    Print();

    printf("\nDelete a value\n");

    int v;
    scanf("%d", &v);

    DeleteBV(v);

    Print();

    return 0;
}