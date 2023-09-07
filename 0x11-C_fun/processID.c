#include <stdio.h>
#include <unistd.h>

/**
 * Description: Program that prints the process ID of a parent process
*/

int main(void)
{
    pid_t process_id;
    pid_t parent_process_id;

    process_id = getpid();
    parent_process_id = getppid();

    printf("The process ID is: %u\n", process_id);
    printf("The process ID of the parent process is %u\n". parent_process_id);
    return (0);
}
