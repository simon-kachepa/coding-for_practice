#include <stdio.h>  
 
int main ()  
{  
// declaration of the variables  
int a = 7;  
int b = 0;  
  
// print the value of the increment operator  
printf (" Before using the post-increment operator " );  
printf (" \n The value of a is %d ", a);  
printf (" \n The value of b is %d ", b);  
// use post increment operator  
b = a++;  
printf (" \n\n After using the post-increment operator ");  
printf (" \n The value of a is %d ", a);  
printf (" \n The value of b is %d ", b);  
return 0;  
}  
