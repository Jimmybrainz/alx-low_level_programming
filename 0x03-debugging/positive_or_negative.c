#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - A program will assign a random number to the variable
* Return: 0(success)
*/

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}


	else
	{
		printf("%d is negative\n", i);
	}
}
