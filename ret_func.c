#include "main.h"

/**
 * ret_char - Writes a character to the stdout
 *
 * @arg: Argument supplied
 *
 * Return: 0 for success -1 for failure.
 */

int ret_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * ret_str - Writes a string(a stream of characters)
 *
 * @arg:  Argument supplied
 *
 * Return: Stream of characters it holds
 */

int ret_str(va_list arg)
{
	int i;

	char *str = va_arg(arg, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	else if (*str == '\0')
	{
		return (-1);
	}

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);

}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}


int ret_int(va_list arg)
{
	int n = va_arg(arg, int);
	int res = count_digit(n);
	print_number(n);
	return (res);
}
