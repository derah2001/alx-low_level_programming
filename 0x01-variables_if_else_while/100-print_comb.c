#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
double dig;
for (dig = 01; dig < 100; dig++)
{
putchar(dig);
if (dig < 99)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
