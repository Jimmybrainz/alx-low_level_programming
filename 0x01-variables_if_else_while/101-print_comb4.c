#include <stdio.h>

/**
 * main - Prints all possible combination of three digits
 * Return: 0(success)
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = x + 1; y <= '8'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{

			putchar(x);
			putchar(y);
			putchar(z);

		if (!(x == '7' && y == '8' && z == '9'))
		{

		putchar(44);
		putchar(32);

		}

		}
	}

}
	putchar('\n');

	return (0);
}
