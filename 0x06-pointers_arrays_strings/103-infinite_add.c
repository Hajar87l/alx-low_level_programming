#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result or 0 if result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n, carry = 0, sum;

for (i = 0; n1[i] != '\0'; i++)
;
for (j = 0; n2[j] != '\0'; j++)
;

if (size_r <= (i > j ? i : j) + 2)
return (0);

for (k = i - 1, l = j - 1, m = 0; k >= 0 || l >= 0 || carry; k--, l--, m++)
{
n = carry;
if (k >= 0)
n += n1[k] - '0';
if (l >= 0)
n += n2[l] - '0';

r[m] = (n % 10) + '0';
carry = n / 10;
}

r[m] = '\0';

for (n = 0; n < m / 2; n++)
{
sum = r[n];
r[n] = r[m - n - 1];
r[m - n - 1] = sum;
}

return (r);
}
