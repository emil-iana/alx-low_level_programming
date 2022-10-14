#include <stdio.h>

/**
 * main - entry point
 * Return: Aways 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i > 9)
		{
			putchar(87 + i);
		}
		else
		{
			putchar(48 + i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
