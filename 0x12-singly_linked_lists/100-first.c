#include <stdio.h>

/**
 * premain - runs befor the main function
 */

void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
