#include "main.h"
/**
 *_islower - checks if a character is upper or lowercase
 *@c: a character converted to ascii value
 *
 *Return: Returns 1 if lowercase and 0 if uppercase
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
