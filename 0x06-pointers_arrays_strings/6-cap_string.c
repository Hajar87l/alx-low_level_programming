#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string
 * @s: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
int i = 0;
int j; /* Moved the declaration of j here */
int newWord = 1;
char separators[] = " \t\n,;.!?\"(){}";

while (s[i])
{
/* Check if the character is a separator */
for (j = 0; separators[j]; j++) /* Removed int before j */
{
if (s[i] == separators[j])
{
newWord = 1;
break;
}
}

/* Capitalize the first character of a word */
if (newWord && isalpha(s[i]))
{
s[i] = toupper(s[i]);
newWord = 0;
}

i++;
}

return s;
}
