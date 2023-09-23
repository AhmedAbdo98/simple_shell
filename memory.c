#include "shell.h"

/**
 * bfree - free a pntr and NULLs the addr
 * @ptr: addr of the pntr to free
 * Return: 1 if free otherwise 0.
 */
int bfree(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}
