#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* 
The idea behind implementing circular queue is to simply implement the 
regular queue logic but then replace (circq -> front/rear + 1) 
with (circq -> front/rear + 1) % (circq -> size)
*/

typedef struct circularqueue
{
    int size;
    int front;
    int rear;
    int * array;
} circq;

bool isEmpty(circq * cq)
{
    return (cq -> front == cq -> rear);
}

bool isFull(circq * cq)
{
    return ((cq -> rear + 1) % (cq -> size) == cq -> front);
}

void enqueue(circq * cq, int value)
{
    if (isFull(cq))
    {
        printf("Circular Queue is Full");
        return;
    }
    else 
    {
        cq -> rear = (cq-> rear + 1) % (cq -> size);
        cq -> array[cq -> rear] = value;
    }
}

int dequeue(circq * cq)
{
    if (isEmpty(cq))
    {
        printf("Circular Queue is Empty");
        return -1;
    }
    else 
    {
        int x = cq -> array[cq -> front];
        cq -> front = (cq-> front + 1) % (cq -> size);
        return x;
    }
}

int main()
{
    int y;
    circq * mine = (circq *)malloc(sizeof(circq));

    printf("Enter the size of circular queue: ");
    scanf("%d", &y);
    mine -> size = y;
    mine -> array = (int *)malloc(y * sizeof(int));

    free(mine -> array);
    free(mine);
}
