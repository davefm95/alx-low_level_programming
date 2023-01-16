#include "main.h"
/**
 *_strcpy - copies contenst of one pointer to another
 *@dest: destinatinon of string
 *@src: source of srring
 *Return: returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
