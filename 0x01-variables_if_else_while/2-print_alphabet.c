#include <stdio.h>

/**
 * main - Entry point
 * Return - Always returns 0 (Success)
 */
int main(void)
{
	int lowerStartIndex = 97;
	int lowerEndIndex = 122;

	while (lowerStartIndex <= lowerEndIndex)
	{
		putchar(lowerStartIndex);
		lowerStartIndex++;
	}
	putchar('\n');
	return 0;
}
