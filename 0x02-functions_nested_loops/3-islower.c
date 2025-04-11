#include "main.h"

/*
 * _isLower - check for lowercase character
 *
 * @c: character integer
 *
 * Return: 1 if c is lower case 0 otherwise
 *
 */
int _isLower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}

