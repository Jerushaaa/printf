#include "main.h"
#include <stdlib.h>

/**
 * print_S - prints a string and nonprintable character ascii values
 * @S: string to print
 *
 * Return: number of chars printed
 */
int print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_write_char('\\');
			_write_char('x');
			count += 2;
			count += print_hex(str[i]);
		}
		else
		{
			_write_char(str[i]);
			count++;
		}
	}
	return (count);
}
