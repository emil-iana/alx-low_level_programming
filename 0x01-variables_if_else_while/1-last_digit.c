#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always returns 0
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				int num = n % 10;
				if (num > 5)
					printf(" Last digit of %d is %d and is greater than 5", n, num);
				if (num == 0)
					printf(" Last digit of %d is %d and is 0", n, num);
				if (num < 6 && num != 0)
					printf("the last digit of %d is %d and is less than 6 and not 0", n, num);


				return (0);

}
