#include "main.h"
/**
 * swap_int - print alphabet
 * @a: vari1
 * @b: vari2
 * Description: 'prints _putchar too stdout'
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
