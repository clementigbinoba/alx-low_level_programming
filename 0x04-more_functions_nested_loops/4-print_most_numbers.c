#include "main.h"
/**
 * print_most_numbers.c - functions that prints  from 0-9
 * Return:  0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ((i == 2) || (i == 4))
continue;

else
_putchar(i + '0');
}
putchar('\n');
}

