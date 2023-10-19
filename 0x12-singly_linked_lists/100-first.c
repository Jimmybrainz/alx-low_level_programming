#include <stdio.h>

/*using a constructor*/
void print_before_main(void)__attribute__((constructor));

/**
 *print_before_main - This function prints a specific message before the
 *main function is executed
 *Description: Attributes; __attribute__((constructor)) makes this function
 *run before main
 *Return: (void)
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
