#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int dig;
for (dig = 1; dig < 100; dig++)
{
putchar('0' + dig);
if (dig < 99)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
