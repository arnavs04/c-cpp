#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node * next;
} * head = NULL;


void insertAtHead(int value)
{
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
}

void insertAtTail(int value)
{
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }
    struct node * temp;
    temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newnode;
}


void display()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}



int main()
{
    int option, loop = 1;
    while (loop != 0)
    {
        printf("1. Insert \n2. Delete \n3. Display \n4. Exit \nEnter option: ");
        scanf("%d", &option);
        if (option == 1)
        {
            int value, choice;
            printf("Enter value to be inserted: ");
            scanf("%d", &value);
            printf("1. At Tail \n2. At Head \n3. At Index \nEnter choice: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                insertAtTail(value);
            }
            else if (choice == 2)
            {
                insertAtHead(value);
            }
            else if (choice == 3)
            {
                insertAtTail(value);
            }
            else
            {
                printf("Enter valid choice!!!");
            }
        }
        else if (option == 2)
        {
            display();
        }
        else if (option == 3)
        {
            display();
        }
        else if (option == 4)
        {
            loop = 0;
        }
        else
        {  
            printf("Enter valid option!!!");
        }
    }
    return 0;
}
