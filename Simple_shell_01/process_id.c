#include "main.h"

int main(void)
{
	pid_t process_id;

	process_id = getpid();
	printf("%d\n", process_id);

	return (0);
}
