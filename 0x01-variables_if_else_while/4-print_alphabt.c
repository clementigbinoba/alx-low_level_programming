#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - main function to generate a random number
*
*Return: Always 0 (success)
*
*/
int main(void)
{
char c;

c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
			c++;
		}	
		putchar ('\n');
	
	return (0);
}	
