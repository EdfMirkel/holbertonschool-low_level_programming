#include "main.h"
#include <stdlib.h>
/* #include <string.h> */
/**
 *puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *@str: pointer Dereferencing at string.
 *Return : @str
 */

void puts2(char *str)
{

	while (/*i <= strlen(*str)*/*str/* != '\0'*/)
	{
		_putchar(*str);
		/* str+=2; */
		str++;
		if (/*!*str  ||*/*str == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			str++;
	}
	_putchar('\n');
}
