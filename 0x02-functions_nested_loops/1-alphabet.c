#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet a-z afer looping
 *
 * Return: 0
 */

void print_alphabet(void)
{

	char i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

}
