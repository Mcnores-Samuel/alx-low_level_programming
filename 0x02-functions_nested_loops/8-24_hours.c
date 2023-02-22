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
			putchar((hour / 10) + 48);
			putchar((hour % 10) + 48);
			putchar(58);
			putchar((minutes / 10) + 48);
			putchar((minutes % 10) + 48);

			if (hour != 23 || minutes != 59)
			{
				putchar(10);
			}
			
		}
    }
}
