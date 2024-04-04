#include <stdio.h>

/**
 * before_main - prints a message BEFORE MAIN() IS EXCECUTED
 *
 */
void before_main() __attribute__((constructor))
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
