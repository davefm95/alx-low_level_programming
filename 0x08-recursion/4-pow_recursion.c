/**
 *_pow_recursion - calcuates an integer x to a givem power ,y
 *@x: integer arg
 *@y: power to be calculated to
 *Return: result of calculation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
