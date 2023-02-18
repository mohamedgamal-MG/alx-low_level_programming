#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabe
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
