#include "main.h"
/**
 * print_most_numbers - print alphabet
 * Description: 'prints _putchar too stdout'
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			break;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
