#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
int i, j;
char initial[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i]; i++)
{
for (j = 0; initial[j]; j++)
{
if (s[i] == initial[j])
{
s[i] = rotated[j];
break;
}
}
}

return (s);
}
