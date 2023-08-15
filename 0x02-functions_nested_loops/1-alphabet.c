#include <stdio.h>
/**
 * main - entry point
 *
 * print_alphabet - to print alphabet
 *
 * Description: A C program
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
	}
	putchar("\n");
}
int main(void)
{
	print_alphabet();
}
