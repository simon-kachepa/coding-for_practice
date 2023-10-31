#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: program that traverse a linked list asnd prints its data
* Return: 0 (Success)
*/

struct node
{
    int data;
    struct node *link;
};

void print_node_data(struct node *head);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 150;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 300;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 450;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 600;
    current->link = NULL;
    head->link->link->link = current;

    print_node_data(head);

    return (0);
}

/**
 *  print_node_data - Function that prints the data of a node
*/
 void print_node_data(struct node *head)
 {
    if (head == NULL)
    {
        printf("The list is empty");
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
 }
