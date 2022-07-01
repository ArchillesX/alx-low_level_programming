#include <stdio.h>

/**
 * main - Entry point
 * Description: Lowercase and Uppercase
 * Return: Always 0 (success)
 */

int main(void)
{

int ch;

/* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	getch();

/* print uppercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar(‘\n’);
	getch();
}
