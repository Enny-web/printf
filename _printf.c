#include "main.h"
/**
 * _printf - function produces output according to a format
 * @format:a character string
 * Return:bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int m, s_print_it, print_it = 0;
	va_list madut;

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	va_start(madut, format);
	for (m = 0; format[m] != '\0'; m++)
	{
		if (format[m] != '%')
			our_putchar(format[m]);
	else if (format[m + 1] == 'c')
	{
		our_putchar(va_arg(madut, int));
		m++;
	}
		else if (format[m + 1] == 's')
		{
			s_print_it = our_puts(va_arg(madut, char *));
			m++;
			print_it += (s_print_it - 1);
		}
		else if (format[m + 1] == '%')
		{
			our_putchar('%');
	}
	print_it += 1;
	}
	va_end(madut);
	return (print_it);
}
