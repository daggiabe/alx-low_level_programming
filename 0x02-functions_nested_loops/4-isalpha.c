#include "main.h"

/**
 * _isalpha - checks for alhabets
 * @c: character to be checked
 *
 * Returb: 1 if character is a letter,0 otherise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
