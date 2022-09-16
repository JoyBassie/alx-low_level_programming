#include <stdlib>
#include "main.h"
#include <time.h>
/**
 * main - entry point
 * headers goes in there
 * betty style doc for function go in there
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n - rand() - RAND_MAX / 2;
	/* code goes in there */
	if (n == 0)
		_putchar("is zero", '\n')
	if (n > 0)
		_putchar("is positive", '\n')
	if (n < 0)		
                _putchar("is negative", '\n')
	return (0);
}	
