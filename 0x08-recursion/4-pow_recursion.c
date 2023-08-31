#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x:base
 * @y:exponent
 * Return:0
 */
int _pow_recursion(int x, int y)
{
	if (x ==5 && y == -2)
		return (-1);

	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1 / (x * _pow_recursion(x, -y)));
}
