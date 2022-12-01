/**
 *get_bit - gets bit at spec index
 *@index: index of bit to be gotten
 *Return: the value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(n) * 8 - 1)
		return (-1);
	bit = (int)((n >> index) & 1);
	return (bit);
}
