#include <stdio.h>

/**
 * main - prints alphabet in lowercase and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar('\n');
	return (0);
}