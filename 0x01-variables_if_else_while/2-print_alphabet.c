#include <stdio.h>

/**
 * main - entry point
 * Return::always returns 0
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
