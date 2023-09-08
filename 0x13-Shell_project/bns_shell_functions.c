#include "bns_shell_header.h"

/**
 * Main shell function
 */

void bns_shell()
{
	char input[250];

	while (1)
	{
		bns_display_prompt();
		bns_accept_command(input, sizeof(input));
		bns_display_command(input);
	}
}
/**
 * Function that display the prompt
 */
void bns_display_prompt()
{
	bns_print("brendon&simon_$");
}

/**
 * Function that accepts commands
 */

/**
 * Function that executes the command
 */
void bns_display_command(const char *input)
{
	pid_t 
}
