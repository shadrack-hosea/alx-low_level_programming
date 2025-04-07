#include <stdio.h>

/*
 * main - Entry point
 * Return: Always return 0(Success)
 *
 */
int main(void)
{
	int initial = 0;

	while (initial < 10)
	{
		putchar(initial + '0');
		initial++;
	}
	putchar('\n');
	return (0);

}
