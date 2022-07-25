#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins tomake change
 *
 * @argc: stores numbe of command line arguments passed
 * @argv: array of character pointers listing all the arguments
 *
 * Return:: 0if succes
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents  - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
