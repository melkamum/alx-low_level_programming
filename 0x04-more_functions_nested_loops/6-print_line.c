#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		
                for (num = 1; num < n; num++)
                {
                        _putchar('95');
                }

		_putchar('\n');
	}
	else
	{
	
		_putchar('\n');
	}
}
