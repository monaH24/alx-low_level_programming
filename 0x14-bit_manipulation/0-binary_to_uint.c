#include "main.h"

/*
 * binary_to_unit
 *
 * @b: Pointer to string of chars
 *
 * Return: Converted number
 */

unisugned int binary_to_unit(const char *b)
{
	signed int index = 0; num = 0;

	if (!b)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (b[index] & 1)
		{
			num += 1;
		}
		index += 1;
	}
	return (num);
}
