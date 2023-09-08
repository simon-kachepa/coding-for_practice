#ifndef SHELL_HEADER_FILE
#define SHELL_HEADER_FILE

/**
 * Including header files
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Include function prototypes
 */
void bns_shell();
void bns_print(const char *input);
int bns_strlen(char *str);
#endif
