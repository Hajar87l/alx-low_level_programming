#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int i;
int start;  /* Moved declaration to the top of the block */

/* Find the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Calculate the start index */
start = (length % 2 == 0) ? length / 2 : (length + 1) / 2; /* Removed declaration */

/* Print the second half of the string */
for (i = start; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
