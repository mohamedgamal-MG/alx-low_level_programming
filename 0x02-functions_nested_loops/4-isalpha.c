#include "main.h"
/**
 * _isalpha - function it used
 * Description: checks for alphabetic character
 * @c: the integer value it receives
 * Return: 0
 */
int _isalpha(int c)
{
	int i = 'a';
	int x = 'A';

	for (i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (x <= 'Z'; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
