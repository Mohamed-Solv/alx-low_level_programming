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
	char ch = 'a';

	while (ch <= 'd')
	{
		putchar(ch);
		ch++;
	}
	ch++;
	while (ch <= 'p')
	{
		putchar(ch);
		ch++;
	}
	ch++;
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
