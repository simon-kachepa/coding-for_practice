#include <stdio.h>
#include <stdlib.h>

/**
 * Description: A program that adds a node at the end without traversing the linked list
*/

struct node
{
    int data;
    struct node *link;
};

struct node* add_node(struct node *ptr, int data);
void print_data(struct node *head);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_node(ptr, 5);
    ptr = add_node(ptr, 15);
    ptr = add_node(ptr, 20);

    /*Assigning the value of head to ptr so that we can use ptr to traverse the linked list when printing data*/
    ptr = head;

    /*Printing the data of the created linked list*/
    print_data(head);
    return (0);
}

/**
 * Function to add a node at the end;
*/
struct node* add_node(struct node *ptr, int data)
{
    struct node *tmp = NULL;

    tmp = malloc(sizeof(struct node));
    tmp->data = data;
    tmp->link = NULL;

    ptr->link = tmp;

    return (tmp);
}

/**
 * Function that prints the data of the linked list
*/
void print_data(struct node *head)
{
    struct node *ptr = NULL;

    if (head == NULL)
    {
        printf("The linked list is empty");
    }
    else 
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
