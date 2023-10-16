#include "main.h"
/**
 * our_puts - to print string
 * @c:string to be prinnted
 * Return:number of opf bytes
 */
int our_puts(char *c)
{
	int print_it = 0;

	if (c)
	{
		for (print_it = 0; c[print_it] != '\0'; print_it++)
			our_putchar(c[print_it]);
	}
	return (print_it);
}
