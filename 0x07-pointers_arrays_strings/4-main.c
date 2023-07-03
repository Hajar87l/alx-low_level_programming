#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);  /* Here, make sure it is _strpbrk not _strstr */

    if (t != NULL)
    {
        printf("%s\n", t);
    }
    return (0);
}
