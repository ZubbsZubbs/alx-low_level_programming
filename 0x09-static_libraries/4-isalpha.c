#include "main.h"

/**
 * _isalpha - checks if a letter is lower or uppercase
 * @c: the character to be checked
 * Return: 1 (Success) or 0 (failure)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
