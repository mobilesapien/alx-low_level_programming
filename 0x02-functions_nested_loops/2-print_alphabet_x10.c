#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	char b;
	int m;

	m = 0;

	while (m < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		m++;
	}
}
