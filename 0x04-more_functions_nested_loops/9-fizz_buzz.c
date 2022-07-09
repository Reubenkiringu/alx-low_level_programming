#include <stdio.h>

/**
 * main - FizzBuzz for multiples of 3 and 5
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

				      
		   
