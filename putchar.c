#include "main.h"
/**
 * our_putchar - print character
 * @c:input
 * Return:1
 */
int our_putchar(char c)
{
	return (write(1, &c, 1));
}
