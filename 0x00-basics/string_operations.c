#include <stdio.h>

int main(void)
{
    char name[] = "Simon";
    char *ptr;
    char *ptr1;
    ptr = name;
    ptr1 = &name;
    

    printf("Name: %s\n", name);
    printf("Name: %c\n", *ptr);
    printf("Name: %c\n", *ptr1);
    printf("Name: %p\n", &name);
    printf("Name: %p\n", ptr);
    printf("Name: %p\n", ptr1);
    return (0);
}
