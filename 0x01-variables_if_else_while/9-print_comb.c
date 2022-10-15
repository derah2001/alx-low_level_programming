#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig;
for (dig = 48; dig <= 57; dig++)
{
putchar(dig);
if (dig < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
