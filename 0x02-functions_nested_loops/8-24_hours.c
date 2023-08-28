#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * no use of standard library
 *
 * Return: void
 */
void jack_bauer(void)
{
	int mins;
	int hour = 0;

	while (hour < 10)
	{
		mins = 0;
		while (mins < 10)
		{
			_putchar(hour + '0');
			_putchar(':');
			_putchar(mins + '0');
			_putchar('\n');
			mins++;
		}
		hour++;
	}
	_putchar('\n');
}
