#include <stdio.h>
#include <holberton.h>
/**
 * main - The function
 *
 * Description: print the "_putchar\n"
 *
 * Return: 0
 */
int main(void)
{
	char a[] = "_putchar\n";
	int i = 0;

	while (a[i] != '\0')
	{
		char b = a[i];

		_putchar(b);
		i++;
	}
	return (0);
}
