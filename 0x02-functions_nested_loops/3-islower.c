#include "main.h"
/**
 * _islower - function to print lowercase character
 * @c: is the int that will use for the argumetlnt of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

