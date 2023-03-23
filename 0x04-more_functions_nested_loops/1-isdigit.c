#include "main.h"

/**
 * _isdigit: chekcs if c is a decimal digit starting from 0 to 9
 * c: an integer varaibale place holder
 * Return: 1 if true or 0
 */

int _isdigit(int c)
{
	if (c >=48 && c <=57)
	{
		return (1);
	}
	return (0);
}
