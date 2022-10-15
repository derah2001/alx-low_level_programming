#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* while - function for printing ascii code
* putchar - printing the ascii code to alphabets
* Return: Always 0 (Success)
*/
int main(void)
{
char letter = 97
while (letter <= 122)
{
putchar("%c", letter);
letter++;
}
return (0);
}
