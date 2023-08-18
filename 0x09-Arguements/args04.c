#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int num1, num2, result = 1, i;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;clearerr

    printf("%d\n", result);
}
