#include "main.h"
/**
 * print_alphabet_x10 - the function
 * Description: print 10 times for alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int x;

	while (x <= 9)
	{
		for (a = 'a' ; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_puchar(\n);
		x++;
	}
}
