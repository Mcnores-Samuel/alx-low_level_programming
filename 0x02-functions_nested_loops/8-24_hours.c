#include "main.h"

/**
 * jack_bauer - prints every hour and minutes within 24 hours range.
 * Return: void.
 */

void jack_bauer(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(58);
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
_putchar(10);
		}
}
}
