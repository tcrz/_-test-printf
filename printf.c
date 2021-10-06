#include "main.h"


int _printf(const char *format, ...)
{
	unsigned int i;
	int typeChecked = 0, charReturned = 0;
	va_list arg;
/* char *format(va_list); */

	va_start(arg, format);

/* if (format == NULL) */
/* { */
/* return (-1); */
/* } */

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charReturned++;
			continue;
		}

		if (format[i + 1] == '%')
		{
			_putchar('%');
			charReturned++;
			i++;
			continue;
		}

		if (format[i + 1] == '\0')
		{
			return (-1);
		}

		typeChecked = printTypeChecker(format[i + 1], arg);

		if (typeChecked == -1 || typeChecked != 0)
		{
			i++;
		}

		if (typeChecked > 0)
		{
			charReturned += typeChecked;
		}

		if (typeChecked == 0)
		{
			_putchar('%');
			charReturned++;
		}

	}

	va_end(arg);
	return (charReturned);

}

