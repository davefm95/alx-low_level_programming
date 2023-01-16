/**
 *_isalpha - checks if a character is an alphabet
 *@c: charactee argument
 *
 *Return: returns 1 if c is an alphabet returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
