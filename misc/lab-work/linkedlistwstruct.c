#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node * next;
} * head = NULL;

void create(int A[], int n)
{
    struct Node * newnode, * temp;
    head = (struct Node*)malloc(sizeof(struct Node));
    temp = head;
    head -> data = A[0];
    head -> next = NULL;
    for (int i = 1; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode -> data = A[i];
        newnode -> next = NULL;
        temp -> next = newnode;
        temp = newnode;
    }
}

void display()
{
    struct Node* temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp-> next;
    }
}

int main()
{
    int num;
    printf("How many elements? ");
    scanf("%d", &num);

    int A[num];
    for (int j = 0; j < num; j++)
    {
        printf("Enter the element: ");
        scanf("%d", &A[j]);
    }
    create(A, num);
    display();
}