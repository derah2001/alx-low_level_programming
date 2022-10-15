#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig = 48;
while (dig <= 57)
{
putchar(dig);
putchar(44);
putchar(32);
dig++;
}
putchar('\n');
return (0);
}
