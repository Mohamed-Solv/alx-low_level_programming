#include "main.h"
/**
 * _islower - check alphabet
 * @c: the character from ascii
 * Description: 'prints _putchar too stdout'
 * Return: always 0
 */
int _islower(int a)
{
	int a;

	if (a <= 97 && a >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
