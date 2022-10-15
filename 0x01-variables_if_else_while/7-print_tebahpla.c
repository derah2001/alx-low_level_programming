#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char rettel = 122;
while (rettel >= 97)
{
putchar(rettel);
rettel--;
}
putchar('\n');
return (0);
}
