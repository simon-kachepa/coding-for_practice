#include <stdio.h>
int addNumbers(int *a, int *b);
int main() {
    int num1 = 2, num2 = 3;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    
  addNumbers(ptr1, ptr2);
    printf("Sum is: %d\n", num1 + num2);

    return 0;
}
int addNumbers(int *a, int *b){
    *a = 20;
    *b = 30;
    
    return (*a + *b);
}
