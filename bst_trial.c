#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node * left;
    int data;
    struct node * right;
} * root = NULL;

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

struct node *deleteleaf(struct node *r)
{
    if (r == NULL)
    {
        return NULL;
    }
    if (r->left == NULL && r->right == NULL)
    {
        free(r);
        return NULL;
    }
    r->left = deleteleaf(r->left);
    r->right = deleteleaf(r->right);
    if (r->left == NULL && r->right == NULL) 
    {
        free(r);
        return NULL;
    }
    return r;
}

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

int countleaf(struct node *r)
{
    if (r == NULL)
    {
        return 0;
    }
    else if (r->left == NULL && r->right == NULL)
    {
        return 1;
    }
    else
    {
        return (countleaf(r->left) + countleaf(r->right));
    }
}

void printMenu()
{
    printf("Binary Search Tree Operations:\n");
    printf("1. Insert element\n");
    printf("2. Delete leaf nodes\n");
    printf("3. Count leaf nodes\n");
    printf("4. Count all nodes\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice, key;
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
            root = deleteleaf(root);
            printf("All leaf nodes deleted.\n");
            break;
        case 3:
            printf("Number of leaf nodes: %d\n", countleaf(root));
            break;
        case 4:
            printf("Total number of nodes: %d\n", countNodes(root));
            break;
        case 5:
            printf("Exiting the program.\n");
            exit = 2;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
