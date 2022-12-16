#include "main.h"
/**
 * print_diagonal - functions that draws 
 * @c: input
 * Return: diagonal 
 */
void print_diagonale(int n)
{
int co, sp;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= n; co++)
{
for (co = 1; sp < co; sp++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
