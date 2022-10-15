#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig;
char alp;
for (dig = 48; dig <= 57; dig++)
{
putchar(dig);
}
for (alp = 97; alp <= 102; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
