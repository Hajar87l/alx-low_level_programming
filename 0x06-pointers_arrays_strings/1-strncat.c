#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;

    /* Find the end of dest string */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Copy at most n bytes from src to dest */
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Null terminate dest */
    dest[i] = '\0';

    return dest;
}
