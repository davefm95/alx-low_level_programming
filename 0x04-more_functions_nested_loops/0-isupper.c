#include "main.h"
/**
 *_isupper - tests if a character is an uppercase letter
 *@c: character argument
 *Return: returns 1 if the character is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
