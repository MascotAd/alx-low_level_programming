#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, i;

	for (d = '0'; d <= '9'; d++)
	{
		for (i = '0'; i<= '9'; i++)
		{
			if (d < i)
			{
				putchar(d);
				putchar(i);
				
				if (d != '8' || (d == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
