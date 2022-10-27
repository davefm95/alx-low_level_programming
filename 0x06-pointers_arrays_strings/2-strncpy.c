/**
 *_strncpy - copies a specified number of characters from one pointer to another
 *@dest: pointer to be copied to
 *@src: pointer to be copied from
 *@n: number of characters to copy
 *Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
