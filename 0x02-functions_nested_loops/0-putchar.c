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
char *p = word;
while(*p){
putchar(*p);
p++;
}  
	_putchar('\n');
	return (0);
}
