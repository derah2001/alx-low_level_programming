#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 97;
while (letter <= 122)
{
putchar(letter);
letter++;	
if (letter == 101 || letter == 113)
continue;	
}
putchar('\n');
return (0);
}
