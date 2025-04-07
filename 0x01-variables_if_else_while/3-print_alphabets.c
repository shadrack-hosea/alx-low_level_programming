#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0(Success)
 */
int main(void)
{
	int lowerStartIndex = 97;
	int lowerEndIndex = 122;
	int upperStartIndex = 65;
	int upperEndIndex = 90;

	while (lowerStartIndex <= lowerEndIndex)
	{
		putchar(lowerStartIndex);
		lowerStartIndex++;
	}
	while (upperStartIndex <= upperEndIndex)
	{
		putchar(upperStartIndex);
		upperStartIndex++;
	}
	putchar('\n');
	return (0);
}

