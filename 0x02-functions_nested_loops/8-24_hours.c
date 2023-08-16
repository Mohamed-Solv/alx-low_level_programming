#include "main.h"
/**
 * jack_bauer - check number
 * Description: 'prints _putchar too stdout'
 * Return: always 0
 */
void jack_bauer(void)
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
