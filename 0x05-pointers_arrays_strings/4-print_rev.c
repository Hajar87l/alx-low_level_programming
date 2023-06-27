#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line to stdout
 * @s: The string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;
int i;

/* Find the length of the string */
while (s[length])
{
length++;
}

/* Print the string in reverse */
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

/* Print a new line */
_putchar('\n');
}
