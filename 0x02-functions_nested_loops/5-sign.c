#include "main.h"

/*
 * print_sign - print sign of a number
 *
 * @n: number
 *
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
       	else 
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
}
