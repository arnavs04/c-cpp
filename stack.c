#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int * array;
} * st;

void push(int x)
{
    if (st -> top == st -> size - 1)
    {
        printf("Stack Overflow\n");
    }
    else 
    {
        st -> top++;
        st -> array[st -> top] = x;
    }
}

int pop()
{
    if (st -> top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int ele = st -> array[st -> top];
        st -> top--;
        return ele;
    }
}

int main()
{
    st = (struct Stack *)malloc(sizeof(struct Stack));
    printf("Enter size of stack: ");
    scanf("%d", &st->size);
    st -> array = (int *)malloc(st -> size * sizeof(int));
    st -> top = -1;
    int exit = 0;
    while (exit == 0)
    {
        int choice;
        printf("1 Insert \n2 Delete \n3 IsFull \n4 IsEmpty \n5 Exit:\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int num;
            printf("Enter number to insert: ");
            scanf("%d", &num);
            push(num);
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 5)
        {
            exit = 1;
        }
    }
    return 0;
}