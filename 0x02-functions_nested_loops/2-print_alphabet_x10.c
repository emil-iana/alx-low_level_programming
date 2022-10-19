#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print all alphabet 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void print_alphabet_x10(void)
{
	char i;
	int j;

	j = 0;
	while (j <= 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		j++;
	}

}
