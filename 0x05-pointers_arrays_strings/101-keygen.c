#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char password;
int i;
srand(time(0));
while (i <= 2645)
{
password = rand() % 128;
i += password;
putchar(password);
}
putchar(2772 - i);
return (0);
}
