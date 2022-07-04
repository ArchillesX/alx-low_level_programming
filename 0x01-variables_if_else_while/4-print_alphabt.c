#include <stdio.h>

/**
 * main - entry point
 * Description: Alphabets
 * Return: zero on success
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a == 'q' || a == 'e')
	{
	continue;
	}
	putchar(a);
	}
	putchar('\n');

	return (0);
}
