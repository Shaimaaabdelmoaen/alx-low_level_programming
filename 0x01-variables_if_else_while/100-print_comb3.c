#include<stdio.h>
/**
 * main - Entry - point 
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int a;

	for (c = 1; c < 10; c++)
	{
		putchar('0' + c);
		putchar(',');
		putchar(' ');
	}
	for(a = 12; a < 90; a++)
	{
		putchar(a);
		if (a < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

