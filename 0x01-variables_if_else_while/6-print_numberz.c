#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A C program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = '0';

	while (ch < '10')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
