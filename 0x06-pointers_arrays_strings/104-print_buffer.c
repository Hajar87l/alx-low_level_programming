#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: Nothing.
 */
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", b[i + j]);
else
printf("  ");
if (j % 2)
printf(" ");
}
for (j = 0; j < 10 && i + j < size; j++)
{
char c = b[i + j];
printf("%c", (c >= ' ' && c <= '~') ? c : '.');
}
printf("\n");
}

if (size <= 0)
printf("\n");
}
