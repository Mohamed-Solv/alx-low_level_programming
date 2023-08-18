#include "main.h"
/**
 * _isupper - check alphabet
 * @c: the character from ascii
 * Description: 'check the alphabet'
 * Return: success: 0, faild 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
