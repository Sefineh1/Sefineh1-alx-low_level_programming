/**
 * swap-int - A function that swaps the value of two integers
 * @a,b:Two integer values
 *
 * Return: Always 0
 */

void swap_int(int*a, int*b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
