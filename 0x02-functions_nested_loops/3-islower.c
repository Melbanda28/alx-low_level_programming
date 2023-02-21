#include "main.h"

/**
 * _islower - checks wether character passed is lowercase
 *
 * @c: character to be tested
 *
 * Return: 1 if @c is lowercase otherwise 0
 */
int_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
