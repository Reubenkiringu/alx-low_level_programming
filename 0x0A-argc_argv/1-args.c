#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: stores number of command line arguments passed
 * @argv: array of character pointers all the arguments
 *
 * Return: 0 if success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int counter;

	for (counter = 0; counter < (argc - 1); counter++)
		;

	printf("%d\n", counter);
	return (0);
}
