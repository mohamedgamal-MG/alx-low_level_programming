#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
