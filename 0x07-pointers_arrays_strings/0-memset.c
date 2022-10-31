#include "main.h"

/**
 * _memset - The _memset() function fills _memset - The _memset()
 * function fills
 * pointed to by s with the constant byte 
 * @s:target
 * @b: constant byte
 * @n:number of byte
 * Return: returns new value of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}
