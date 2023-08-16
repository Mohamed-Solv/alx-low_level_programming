#include "main.h"
/**
 * print_last_digit - check number
 * @j: the signed number
 * Description: 'prints _putchar too stdout'
 * Return: always 0
 */
int print_last_digit(int j)
{
	int l;

	l = j % 10;

	if (j < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
