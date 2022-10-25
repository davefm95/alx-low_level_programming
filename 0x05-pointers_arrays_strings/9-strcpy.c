#include "main.h"
/**
 *_strcpy - copies contenst of one pointer to another
 *@dest: destinatinon of string
 *@src: source of srring
 *Return: returns pointer to dest
 */
void *_strcpy(char *dest, char *src)
{
	while ((*dest = *src))
	{
		dest++;
		src++;
	}
	return (*dest);
}
