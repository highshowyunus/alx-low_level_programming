#include "main.h"

/**
 * _strcmp - Compares pointer to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 *
 * Return: if str1 < str2, the negative difference of the first unmatched char
 * if strl == str2, 0.
 * if strl > 2, the negative difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
