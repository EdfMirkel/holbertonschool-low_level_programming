#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*  main - prints the alphabet in lowercase and uppercase
*
* Return: character
*/
int main(void)
{
char c;
for (char c = 'a';  c <= 'z'; c++)
putchar(c);
for (char c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
