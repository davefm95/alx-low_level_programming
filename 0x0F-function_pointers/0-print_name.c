/**
 *print_name - prints a name
 *@name: string to be printed
 *@f: pointer to function that does the printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
