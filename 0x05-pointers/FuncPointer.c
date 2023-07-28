#include <stdio.h>

int modify_my_para(int m);
int main(void)
{
    int n, result;

    n = 98;
    result = modify_my_para(n);
    printf("Value: %d\n", result);
    printf("Value: %d\n", n);

    return (0);
}
int modify_my_para(int m)
{
    m =402;
    return (m);
}
