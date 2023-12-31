#include "shell.h"
/**
 * _eputs - print an inp string
 * @str: string to be printed
 * Return: Non
 */
void _eputs(char *str)
{
int i = 0;
if (!str)
return;
while (str[i] != '\0')
{
_eputchar(str[i]);
i++;
}
}
/**
 * _eputchar - writes char c to stderr
 * @c: char to print
 * Return: On succ 1.
 * On error -1 is returned, and errno is set
 */
int _eputchar(char c)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(2, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
/**
 * _putfd - writes the char c to given fd
 * @c: char to print
 * @fd: The file descriptr to write to
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropr
 */
int _putfd(char c, int fd)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(fd, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
/**
 * _putsfd - prints an inp string
 * @str: string to be printed
 * @fd: file descriptr to write to
 * Return: the numb of chars put
 */
int _putsfd(char *str, int fd)
{
int i = 0;
if (!str)
return (0);
while (*str)
{
i += _putfd(*str++, fd);
}
return (i);
}
