

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Add_newNode(int data, int n)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (n == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    struct Node *temp_1 = head;
    for (int i = 0; i < n-2; i++)
    {
        temp_1 = temp_1->next;
    }
    temp->next = temp_1->next;
    temp_1->next = temp;
    
}

void Print()
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
    head = NULL;

    printf("List: \n");

    Add_newNode(2, 1);
    Add_newNode(3, 2);
    Add_newNode(4, 1);
    Add_newNode(5, 2);

    Print();

    return 0;
}
