#include "shell.h"
/**
 * last_free - Free memory for last execution
 * @entry: Input by the user
 */
void last_free(char *entry)
{
if (isatty(STDIN_FILENO))
{
_putchar('\n');
}
free(entry);
}
