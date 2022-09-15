#include "main.h"

/**
 * _islower - functuion that checks if the character is in lowercase
 * @c: the int that will be used for the argument of the function
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
			return (0);
}
