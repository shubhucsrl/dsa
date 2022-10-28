#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

// creating the linked list
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

struct Node *Search(struct Node *p, int key)
{
    struct Node *q;

    while (p != NULL)
    {
        if (key == p->data)
        {
            // q->next=p->next;
            // p->next=first;
            // first=p;
            printf("\nFound ");
            return p;
        }
        // q=p;
        p = p->next;
    }
    printf("\nNot Found");
    return NULL;
}

int main()
{
    struct Node *temp;

    int j;

    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    printf("Enter the element you want to search:\t");
    scanf("%d", &j);
    temp = Search(first, 8);

    printf("%d", temp->data);

    return 0;
}