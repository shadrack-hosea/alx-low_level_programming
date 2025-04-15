#include "main.h"

/*
 * jack_bauer - print every minute of Jack Bauer
 *
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			int hour_first_digit;
			int hour_last_digit;
			int minute_first_digit;
			int minute_last_digit;

			hour_first_digit = hour / 10;
			hour_last_digit = hour % 10;
			minute_first_digit = minute / 10;
			minute_last_digit = minute % 10;
			
			_putchar(hour_first_digit + '0');
			_putchar(hour_last_digit + '0');
			_putchar(':');
			_putchar(minute_first_digit + '0');
			_putchar(minute_last_digit + '0');

			_putchar('\n');
		}
	}
}

