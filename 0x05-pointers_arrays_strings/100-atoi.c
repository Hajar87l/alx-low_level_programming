#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int i = 0, sign = 1, started = 0;
unsigned int number = 0;

while (s[i] != '\0')
{
if (s[i] == '-' && started == 0)
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
number = number * 10 + (s[i] - '0');
}
else if (started)
{
break;
}
i++;
}
return (number * sign);
}
