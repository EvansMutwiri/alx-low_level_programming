#include<stdio.h>
/**
 * main - Entry point
 * putchar - print characters
 * Return: Always 0(Success)
 */
int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
