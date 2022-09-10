

/* 
* File: 3-print_alphabets.c
* Author: Joy Bassey 
*/

#include <stdio.h>

/**
* main - Alphabets in lowercase
*
* Description : using the main function 
* this program prints alphabet in lower case and in upper case
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{ 
putchar(ch);
}
putchar('\n');
return (0);
}
