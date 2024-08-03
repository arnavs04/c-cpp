#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    char * array;
} *st;

void push(struct Stack * st, char x)
{
    if (st -> top == st -> size - 1)
    {
        printf("Stack Overflow\n");
    }
    else 
    {
        st -> array[st -> top] = x;
        st -> top++; 
    }
}

int pop(struct Stack * st)
{
    if (st -> top == -1)
    {
        printf("Stack Underflow\n");
        return 1;
    }
    else
    {
        char ele = st -> array[st -> top];
        st -> top--;
        return ele;
    }
}

bool isEmpty(struct Stack * st)
{
    if (st -> top == -1)
    {
        return true;
    }
    return false;
}

bool isFull(struct Stack * st)
{
    if (st -> top == st -> size - 1)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    printf("How many characters does the expression contain? ");
    scanf("%d", &num);
    char exp[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the expression one by one: ");
        scanf(" %c", &exp[i]);
    }

    st = (struct Stack *)malloc(sizeof(struct Stack));
    st -> size = num;
    st -> top = -1;
    st -> array = (char *)malloc(num * sizeof(char));

    for (int i = 0; i < num; i++)
    {
        if (exp[i] == '(' || exp[i] =='[')
        {
            push(st, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']')
        {
            if (isEmpty(st))
            {
                return false;
            }
            else
            {
                pop(st);
            }
        }
    }

    if (isEmpty(st))
    {
        printf("Is Balanced");
    }
    else
    {
        printf("Is Not Balanced");
    }

    return 0;

}