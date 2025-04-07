#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0(Success(
 */
int main(void)
{
	int startIndex = 97;
	int endIndex = 122;
	int qIndex = 113;
	int eIndex = 101;

	while (startIndex <= endIndex)
	{
		if(startIndex == qIndex || startIndex == eIndex)
		{
			startIndex++;
			continue;
		}
		putchar(startIndex);
		startIndex++;
	}
	putchar('\n');
	return (0);
}
