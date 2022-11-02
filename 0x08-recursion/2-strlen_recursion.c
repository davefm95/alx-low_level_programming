/**
 *_strlen_recursion - calculates the length of a string
 *@s: string to be counted
 *Return: returns the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
