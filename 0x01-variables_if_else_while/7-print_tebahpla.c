#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always returnzero (0)
 *
 */
int main(void)
{
	int startIndex = 122;
	int endIndex = 97;

	while (startIndex >= 97)
	{
		putchar(startIndex);
		startIndex--;
	}
	putchar('\n');
	return (0);
}
