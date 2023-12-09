#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    struct node * left;
    int data;
    struct node * right;
} * root = NULL;

int countNodes(struct node *r)
{
    if (r == NULL)
    {
        return 0;
    }
    else
    {
        return (1 + countNodes(r->left) + countNodes(r->right));
    }
}

struct node * insert(struct node * r, int key)
{
    if (r == NULL)
    {
        struct node * newnode = (struct node *)malloc(sizeof(struct node));
        newnode -> data = key;
        newnode -> left = NULL;
        newnode -> right = NULL;
        return newnode;
    }
    if (key < r -> data)
    {
        r -> left = insert(r -> left, key);
    }
        else if (key > r -> data)
    {
        r -> right = insert(r -> right, key);
    }
    return r;
}

bool delete(struct node *r, int key)
{
    if (r == NULL)
    {
        return false;
    }
    else if (r -> data == key)
    {
        free(r);
        return true;
    }
    else if (key < r -> data)
    {
        delete(r -> left, key);
    }
    else
    {
        delete(r -> right, key);
    }
        return false;
}

bool isEmpty(struct node *r)
{
    return (r == NULL);
}

bool isFull(struct node *r)
{
    int totalnodes = countNodes(r);
    int power = 2;
    for (int i = 0; i < 4; i++)
    {
        if (totalnodes == (power - 1))
        {
            return true;
        }
        else
        {
            power *= 2;
            continue;
        }
    }
    return false;
}

void inordtrav(struct node *r)
{
    if (r != NULL)
    {
        inordtrav(r -> left);
        printf("%d", r -> data);
        inordtrav(r -> right);
    }
}

void preordtrav(struct node *r)
{
    if (r != NULL)
    {
        printf("%d", r -> data);
        preordtrav(r -> left);
        preordtrav(r -> right);
    }
}

void postordtrav(struct node *r)
{
    if (r != NULL)
    {
        postordtrav(r -> left);
        postordtrav(r -> right);
        printf("%d", r -> data);
    }
}

bool search(struct node *r, int key)
{
    if (r == NULL)
    {
        return false;
    }
    else if (r -> data == key)
    {
        printf("Key Found!");
        return true;
    }
    else if (key < r -> data)
    {
        search(r -> left, key);
    }
    else
    {
        search(r -> right, key);
    }
    return false;
}

void printMenu()
{
    printf("Binary Search Tree Operations:\n");
    printf("1. Insert element\n");
    printf("2. Delete element\n");
    printf("3. Check if Tree is Empty\n");
    printf("4. Check if Tree is Full\n");
    printf("5. Traverse the Tree\n");
    printf("6. Search for Value\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice, option, key;
    int exit = 0;
    while (exit != 2)
    {
        printMenu();
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &key);
                root = insert(root, key);
                break;
            case 2:
                printf("Enter the element to be deleted: ");
                scanf("%d", &key);
                delete(root, key);
                printf("Element deleted.\n");
                break;
            case 3:
                if (isEmpty(root))
                {
                    printf("Tree is Empty\n");
                }
                else
                {
                    printf("Tree is not Empty\n");
                }
                break;
            case 4:
                if (isFull(root))
                {
                    printf("Tree is Full\n");
                }
                else
                {
                    printf("Tree is not Full\n");
                }
                break;
            case 5:
                printf("1. Inorder Traversal 2. Pre Order Traversal 3. Post Order Traversal\n");
                scanf("%d", &option);
                if (option == 1)
                {
                    inordtrav(root);
                }
                else if (option == 2)
                {
                    preordtrav(root);
                }
                else if (option == 3)
                {
                    postordtrav(root);
                }
                break;
            case 6:
                printf("Enter the element to be searched for: ");
                scanf("%d", &key);
                search(root, key);
                break;
            case 7:
                printf("Exiting the program.\n");
                exit = 2;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}