#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Structure of a node */
struct node
{
    int data;          // Data
    struct node *next; // Address
} * head;

/*
 * Functions to create and display list
 */
void createList(int n);
void traverseList();
void small();
void large();

int main()
{
    int n, x;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    printf("\nData in the list \n");
    traverseList();
    printf("\n 1.MAX \n 2.MIN\nYour Choice: ");
    scanf("%d", &x);
    if (x == 1)
    {
        large();
    }
    else if (x == 2)
    {

        small();
    }
    return 0;
}

/*
 * Create a list of n nodes
 */
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if (head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }

    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL

    // Create n - 1 nodes and add to list
    temp = head;
    for (i = 2; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if (newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}

/*
 * Display entire list
 */
void traverseList()
{
    struct node *temp;

    // Return if list is empty
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
void small()
{
    struct node *temp = head;
    int min;
    min = INT_MAX;

    while (temp != NULL)
    {
        if (min > temp->data)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    printf("\n--------------------------------\n");
    printf("Smallest number of linked list : %d", min);
}

void large()
{
    struct node *temp = head;
    int max;
    max = INT_MIN;

    while (temp != NULL)
    {
        if (max < temp->data)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    printf("\n--------------------------------\n");
    printf("Largest number of linked list : %d", max);
}
