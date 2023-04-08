#include "main.h"

/**
 * binary_to_uint - convert binary number to unsign interger number
 * @b: A pointer to a char of a 0 or 1
 *
 * Return: will out put a the convert number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int weight = 1;
	int rem;
	int binary = *b;

	while (b != 0)
	{
		rem = binary % 10;
		num = num + rem * weight;
		binary = binary / 10;
		weight *= 2;
	}
	return (num);
}

