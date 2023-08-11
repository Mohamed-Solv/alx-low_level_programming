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

	while (ch <= 'f')
	{
		if (ch == ':')
			ch = 97;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
