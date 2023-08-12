#include <stdio.h>

/**
 * Question: What is the output of the following code
 */

int main(void)
{
    int a = 3;

    int b = ++a + a++ + --a;
    printf("Value of b is: %d\n", b);
    return (0);
}
