#include "main.h"
/**
 * _isdigit - functions that checks for digit from 0-9
 * @c: input
 * Return: 1 if c is digit, 0 otherwise
 */
void more_numbers(void)
{
int i, ro;

for (ro = 0; ro <= 9; ro++){
for (i = 0; i <= 14; i++)
{
if (i > 9)

_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
