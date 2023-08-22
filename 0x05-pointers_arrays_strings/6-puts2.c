#include "main.h"
/**
 * puts2 - print alphabet
 * @str: vari
 * Description: 'prints _putchar too stdout'
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
