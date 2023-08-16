#include "main.h"
/**
 * _isalpha - check alphabet
 * @c: the character from ascii
 * Description: 'prints _putchar too stdout'
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
