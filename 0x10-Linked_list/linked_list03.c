#include <stdio.h>
#include <stdlib.h>

/**
 * Description: program that traverse a linked list asnd prints its data
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
    current->data = 30;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 45;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 60;
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
