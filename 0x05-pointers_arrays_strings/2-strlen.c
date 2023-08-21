#include "main.h"
/**
 * _strlen - print alphabet
 * @s: vari
 * Description: 'prints _putchar too stdout'
 * Return: nothing
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
