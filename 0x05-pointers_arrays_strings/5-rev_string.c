#include "main.h"

/**
 * rev_string
 * Return: void
 */

{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[max - half] = last;
		half--;
	}
}	
