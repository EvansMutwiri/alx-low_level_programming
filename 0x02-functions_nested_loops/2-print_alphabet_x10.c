include "main.h"
/**
 * main - Entry point
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * description: print alphabet lowercase in ascending order
 * Return: Always(0) Success
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar(10);
	}
}
