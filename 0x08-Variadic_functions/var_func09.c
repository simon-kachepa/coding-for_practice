#include <stdio.h>
#include <stdarg.h>

void print_something(char *format, ...);
int main(void)
{
    /* i -> integer*/
    /* s -> string */
    /* f -> float */
    /* c -> character */
    print_something("ishardyfcs", 60, "Hardy", 7.8, 'S', "Capizha");
    return (0);
}

void print_something(char *format, ...)
{
    va_list input;
    int index;

    va_start(input, format);

    for (index = 0; format[index] != '\0'; index++)
    {
        switch(format[index])
        {
            case 'i' :
                printf("%d", va_arg(input, int));
                break;
            case 's' :
                printf("%s", va_arg(input, char *));
                break;
            case 'c' :
                printf("%c", va_arg(input, int));
                break;
            case 'f' :
                printf("%f", va_arg(input, double));
                break;
            default :
                printf("%c", format[index]);
        }
    }
    printf("\n");
    va_end(input);
}
