#include "main.h"

/**
 * binary_to_uint - convert binary number to unsign interger number
 * @b: A pointer to a char of a 0 or 1
 *
 * Return: if b null out 0 Otherwise out put a the convert number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	for (; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}

