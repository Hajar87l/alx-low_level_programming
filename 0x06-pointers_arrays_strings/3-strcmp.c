#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Negative if s1 < s2, 0 if equal, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (int)(*s1) - (int)(*s2);
}
