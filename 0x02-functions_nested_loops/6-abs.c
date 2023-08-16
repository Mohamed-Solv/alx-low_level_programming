#include "main.h"
/**
 * _abs - check number
 * @i: the signed number
 * Description: 'prints _putchar too stdout'
 * Return: always 0
 */
int _abs(int i);
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
