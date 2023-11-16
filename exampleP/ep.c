

#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

// struct Node *head;

// struct Node *Create_Node(struct Node *head, int x)
void Create_Node(struct Node **head, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = *head;
    *head = temp;
}

void OutPut(struct Node *head)
{
    // struct Node *temp = head_block;
    printf("List is: ");

    while (head != NULL)
    {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{

    // head = NULL; // empty list
    struct Node *head = NULL; // empty list
    printf("How many numbers?\n");

    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &x);
        // head = Create_Node(head, x);
        Create_Node(&head, x);
        OutPut(head);
    }

    return 0;
}