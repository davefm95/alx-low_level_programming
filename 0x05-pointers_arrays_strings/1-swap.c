/**
 * swap_int - swaps the values of two integers
 *@a: first integer to be swapped (pointer)
 *@b: second integer to be swapped (pointer)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
