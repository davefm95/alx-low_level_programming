/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: 1 if first is greater,-1 if not and 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		flag = 0;
	else if (s1[i] > s2[i])
		flag = 15;
	else
		flag = -15;
	return (flag);
}
