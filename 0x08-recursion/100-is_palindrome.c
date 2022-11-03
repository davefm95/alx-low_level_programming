char *ptendstr(char *st);
int palincheck(char *str, char *str1);
/**
 *is_palindrome - checks if a number is a palindrome
 *@s: string to br checked
 *Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	char *st;

	if (!(*s))
		return (1);
	st = ptendstr(s);
	return (palincheck(st, s));
}

/**
 *ptendstr - moves pointer to end of string
 *@st: string pointer to be moved
 *Return: new pointer to end of string
 */
char *ptendstr(char *st)
{
	if (*st)
	{
		st++;
		return (ptendstr(st));
	}
	st--;
	return (st);
}

/**
 *palincheck- checks if string is palindrome
 *@str: string with pointer at end
 *@str1: string with pointer at start
 *Return: 1 if true else 0
 */
int palincheck(char *str, char *str1)
{
	if (*str1 && (*str == *str1))
		return (palincheck(--str, ++str1));
	else if (*str1 == '\0')
		return (1);
	else
		return (0);
}
