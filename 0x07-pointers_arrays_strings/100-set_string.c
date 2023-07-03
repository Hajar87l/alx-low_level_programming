#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer that we need to set to point to 'to'
 * @to: string to point to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to;
}
