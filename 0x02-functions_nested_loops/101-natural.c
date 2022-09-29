#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of muls of 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
