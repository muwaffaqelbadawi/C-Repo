

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // initializing head

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

    struct Node *previousNode = head;

    for (int i = 0; i < n - 2; i++)
        previousNode = previousNode->next;

    newNode->next = previousNode->next;
    previousNode->next = newNode;
}

void Delete(int n)
{
    struct Node *previousNode = head;

    if (n == 1)
        head = previousNode->next;

    for (int i = 0; i < n - 2; i++)
    {
        previousNode = previousNode->next;
    }

    struct Node *nextNode = previousNode->next;
    previousNode->next = nextNode->next;
    free(nextNode);
}

void Print()
{
    struct Node *traverser = head;

    while (traverser != NULL)
    {
        printf("%d ", traverser->data);
        traverser = traverser->next;
    }
}

int main()

{
    head = NULL;

    printf("List: \n");

    AddnewNode(2, 1);
    AddnewNode(3, 2);
    AddnewNode(4, 3);
    AddnewNode(5, 4);

    Print();

    int n;
    printf("\nEnter a position\n");
    scanf("%d", &n);

    Delete(n);

    Print();
}