#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - a function to convert binary to unsigned int
 * @b: pointer to char string input
 * Return: always successful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int a;

	if (b == NULL)
		return (0);
	a = 0;
	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[a] == '1')
		{
			count ^= check;
		}
		a++;
	}
	return (count);
}
