#include <stdio.h>
#include <stdlib.h>

/**
 * Description - Creating a single linked list
*/

struct node
{
    int data;
    struct node *link;
};

int main(void)
{
    struct node *head = NULL, *current = NULL;

    head = malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL;

    current = malloc(sizeof(struct node));
    current->data = 200;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 300;
    current->link = NULL;
    head->link->link = current;

    printf("%d\n", head->data);
    printf("%d\n", head->link->data);
    printf("%d\n", head->link->link->data);
    
    return 0;
}
