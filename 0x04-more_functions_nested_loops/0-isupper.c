#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: Variable text
 * Return: ALways 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
