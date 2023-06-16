#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d the last digit of n is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d the last digit of n zero 0\n", n);
        }
	else 
	{
		printf("%d the last digit of n is less than 6\n", n);
        }


	return (0);
}

