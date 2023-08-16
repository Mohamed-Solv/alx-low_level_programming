#include "main.h"
/**
 * print_sign - check number
 * @n: the signed number
 * Description: 'prints _putchar too stdout'
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('n');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		n = n * (-1);
		_putchar('n');
	}
	_putchar('\n');
}
