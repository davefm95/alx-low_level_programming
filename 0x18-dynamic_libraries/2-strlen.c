/**
 *_strlen - counts the number of characters in a string
 *@s: string pointer variable
 *Return: returns the number of characters
 */
int _strlen(char *s)
{
	char ch;
	int sum;

	sum = 0;
	ch = *s;
	while (ch)
	{
		sum++;
		ch = *(s + sum);
	}
	return (sum);
}
