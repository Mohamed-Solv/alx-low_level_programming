#include "main.h"
/**
 * _puts - print alphabet
 * @str: vari
 * Description: 'prints _putchar too stdout'
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
