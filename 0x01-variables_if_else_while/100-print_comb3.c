#include <stdio.h>
/**
 * main - Entry
 * Return: Always return 0 (Success)
 *
 */
int main(void)
{
	int i;
	int j;

	for(i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if(i < 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
