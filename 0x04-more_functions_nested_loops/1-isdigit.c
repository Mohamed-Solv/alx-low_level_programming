#include "main.h"
/**
 * _isdigit - check alphabet
 * @c: the character from ascii
 * Description: 'check the alphabet'
 * Return: success: 0, faild 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
