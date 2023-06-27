#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char password[10]; // assuming the password length is 10 characters

    /* seed random number generator */
    srand(time(0));

    /* generate a random password */
    for (i = 0; i < 9; i++)
    {
        password[i] = 'A' + rand() % ('Z'-'A' + 1);
    }

    /* Null-terminate the password string */
    password[9] = '\0';

    /* Output the password */
    printf("%s\n", password);

    return (0);
}
