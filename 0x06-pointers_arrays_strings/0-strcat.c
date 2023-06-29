#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* Find the end of the dest string */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Copy src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Add the null byte at the end */
    dest[i] = '\0';

    return (dest);
}
