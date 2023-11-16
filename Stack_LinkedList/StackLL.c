// Stack Linked list implementation

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *top = NULL;

void Push(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->link = top;
    top = temp;
}

void Pop()
{
    struct Node *temp;
    if (top == NULL)
        return;

    temp = top;
    top = top->link;
    free(temp);
}

void Top()
{
    printf("Top: %d\n", top->data);
}

void Print()
{
    struct Node *temp = top;

    printf("Stack: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    Push(2);
    Print();
    Top();
    Push(5);
    Print();
    Top();
    Push(10);
    Print();
    Top();
    Pop();
    Print();
    Top();
    Push(12);
    Print();
    Top();

    return 0;
}