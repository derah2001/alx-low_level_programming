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
puchar(letter);
letter++;
}
putchar('\n');
return (0);
}
