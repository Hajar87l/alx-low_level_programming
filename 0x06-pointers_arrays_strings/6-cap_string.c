#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be modified
 *
 * Return: The pointer to the string
 */
char *cap_string(char *s)
{
int i;
char separators[] = " \t\n,;.!?\"(){}";

for (i = 0; s[i] != '\0'; i++)
{
/* Check if character is a letter */
if (isalpha(s[i]))
{
/* Check if it's the first character or follows a separator */
if (i == 0 || strchr(separators, s[i - 1]))
{
s[i] = toupper(s[i]);
}
}
}
return (s);
}
