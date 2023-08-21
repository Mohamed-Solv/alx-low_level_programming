#include "main.h"
/**
 * print_rev - print alphabet
 * @s: vari
 * Description: 'prints _putchar too stdout'
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
