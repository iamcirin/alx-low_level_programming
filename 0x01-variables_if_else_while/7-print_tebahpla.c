#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase except q and e
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	char letter;
	/* your code goes there */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
