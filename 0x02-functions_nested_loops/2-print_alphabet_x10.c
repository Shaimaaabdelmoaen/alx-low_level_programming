#include "main.h"

/**
 * print_alphabet - entry point
 * Description: program that prints alphabet in lowercase
 * Return: 0
*/
void print_alphabet(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
