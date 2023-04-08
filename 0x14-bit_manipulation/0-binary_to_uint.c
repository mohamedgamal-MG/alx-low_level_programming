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
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}
	return (num);
}

