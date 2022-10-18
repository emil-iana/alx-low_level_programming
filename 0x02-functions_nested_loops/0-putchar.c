#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * prints "putchar" followed by a new line
 * Return: 0
 */

int main(void)
{
	char function[] = "putchar";
	int i = 0;

	while (function[i] != '\0')
	{
		putchar(function[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
