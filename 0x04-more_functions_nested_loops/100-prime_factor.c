#include <stdio.h>
#include <math.h>

/**
* main - finds the largest prime
* Description: Uses headers to link and a nested loops to achieve goal
* Return: 0 if no errors
* A: Sqrt is a double by default so I did this to get rid of decimals.
* B: While the number is bigger than the sqrt of the original number.
*/

int main(void)
{
	unsigned long i = 2;
	unsigned long biggest = 0;
	unsigned long number = 612852475143;

	while (number > i)/* B */
	{
		while (number % i == 0)/* C */
		{
			if (i > biggest)
				biggest = i;
			number = number / i;
		}
		i++;/* D */
	}
	printf("%lu\n", biggest);
	return (0);
}

