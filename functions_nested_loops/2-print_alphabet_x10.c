#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int s;
	int c;

	for (s = 0; s < 10; s++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar (c);
		}
		_putchar('\n');
	}
}
