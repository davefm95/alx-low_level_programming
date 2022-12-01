/**
 *set_bit - sets bit to one ay sepcified index
 *@n: poinyer to number
 *@index: of bit to be set
 *Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numatin;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	numatin = 1 << index;
	*n = (n & ~numatin) | (1 << index);
	return (1);
}
