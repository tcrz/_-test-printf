#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 *
 * @c: Character to write to stdout
 *
 * Return: 0 upon success and -1 upon failure
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

