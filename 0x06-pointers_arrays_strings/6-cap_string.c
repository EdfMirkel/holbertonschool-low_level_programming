#include "main.h"
/* #include <string.h> */
/* #include <stdio.h> */

/**
 **cap_string - function that compares two strings.
 *@s: pointer caracter
 *Return: string of pointer type
 */

char *cap_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;

	return (s);
}