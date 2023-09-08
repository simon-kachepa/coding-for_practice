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
 * Function that executes the shell commands
 */

/**
 * Function that accepts commands
 */

/**
 * Function that creates command line interface
 */
