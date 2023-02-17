#include<stdio.h>
/**
 * main - Entry - point 
 * Return: 0 (success)
 */
int main(void)
{
	int x;
	int c;
	int a;

	x = 0;
	for (c = 1; c < 10; c++)
	{
		putchar(x);
		putchar(c + '0');
		putchar(',');
		putchar(' ');
	}
	for(a = 12; a < 90; a++)
	{
		putchar(a + '0');
		if (a < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

