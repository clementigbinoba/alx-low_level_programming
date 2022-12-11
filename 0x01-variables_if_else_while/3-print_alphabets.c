#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main function to gener
    ate a random alphabelt
*Return: Always 0 (success)
*
*/

int main(void)
{
	char c, n;

	c = 'a';
	n = 'A';
	putchar(c);
	while (n <= 'A')
	{
		putchar(n);
		n++;
		}
		putchar('\n');
		return (0);
}
