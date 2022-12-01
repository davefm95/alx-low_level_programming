/**
 *clear_bit - sets bit at specified index to 0
 *@n: poinyer to number
 *@index: of bit to be set
 *Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numatin;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	numatin = 1 << index;
	*n = (*n & ~numatin) | (0 << index);
	return (1);
}
