#include "main.h"

/**
 * fill_short_oct_array - Converts a 16-bit binaryto a 6-digit octal.
 *
 * @bnr: Array containing the 16-bit binary number.
 * @oct: Array to store the resulting 6-digit octal number.
 *
 * Return: Pointer to the octal array.
 */
char *fill_short_oct_array(char *bnr, char *oct)
{
	int op, i, j, ioct, limit;

	oct[6] = '\0';
	for (i = 15, ioct = 5; i >= 0; i--, ioct--)
	{
		if (i > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, j = 1; j <= limit; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
