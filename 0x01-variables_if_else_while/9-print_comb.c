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
	int ch = '1' - 1;

	while (ch <= '8')
	{
		putchar(ch);
		putchar(44);
		putchar(32);
		ch++;
	}
	putchar('9');
	return (0);
}
