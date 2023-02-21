#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar func inside a loop.
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
