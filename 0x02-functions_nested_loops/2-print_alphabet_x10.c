#include "main.h"

/**
 * main - alphabet
 * print_alphabet_10 - print a - z ten times
 */
void print_alphabet_10x(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
