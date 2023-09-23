#include "shell.h"

/**
 * _strlen - returns len of a string.
 * @s: string whose len to check
 * Return: int len of string
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}

/**
 * _strcmp - lexicogarphic comparison of two strings
 * @s1: first string.
 * @s2: second string.
 * Return: neg if s1 < s2, pos if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks if needle starts with haystack.
 * @haystack: string to search.
 * @needle: substring to find.
 * Return: addr of next char of haystack or NULL.
 */
char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
if (*needle++ != *haystack++)
return (NULL);
return ((char *)haystack);
}

/**
 * _strcat - concatenate two strings.
 * @dest: dest buff
 * @src: source buff
 * Return: pntr to dest buff
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;
while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}
