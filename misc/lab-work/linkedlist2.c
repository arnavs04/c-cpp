#include <stdlib.h>
#include <stdio.h>

typedef struct node* node;  // Define a typedef for struct node*

struct node
{
    int data;
    node next;
};

void insertAtHead(int value, node* &head)
{
    node newnode = (node)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void insertAtTail(int value, node* head)
{
    node newnode = (node)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        return;
    }

    node temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void display(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    node head = NULL;
    int option, loop = 1;
    while (loop != 0)
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter option: ");
        scanf("%d", &option);
        if (option == 1)
        {
            int value, choice;
            printf("Enter value to be inserted: ");
            scanf("%d", &value);
            printf("1. At Tail\n2. At Head\nEnter choice: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                insertAtTail(value, &head);
            }
            else if (choice == 2)
            {
                insertAtHead(value, &head);
            }
            else
            {
                printf("Enter valid choice!!!\n");
            }
        }
        else if (option == 3)
        {
            display(head);
        }
        else if (option == 4)
        {
            loop = 0;
        }
        else
        {
            printf("Enter valid option!!!\n");
        }
    }

    // Free the memory allocated for the linked list nodes
    while (head != NULL)
    {
        node temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
