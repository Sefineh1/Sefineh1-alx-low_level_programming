#include "main.h"

/**
 *_isupper : checks if the charactor is uppercase 
 *c: carries integer variable
 *Return: 1 if true or 0
 */

int _isupper(int c)
{
	if (c >=65 && c<=90)
	{
		return (1);
	}
	return (0);
}
