#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int seq = a + b;
	int n = 2;

	printf("%ld, %ld, ", a, b);
	while (n < 49)
	{
		a = b;
		b = seq;
		seq = a + b;
		n++;
		printf("%ld", seq);
		if (n < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
