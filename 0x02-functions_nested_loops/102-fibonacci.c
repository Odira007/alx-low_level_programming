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
	int n = 3;

	printf("%ld, %ld, %ld, ", a, b, seq);
	while (n < 50)
	{
		a = b;
		b = seq;
		seq = a + b;
		n++;
		printf("%ld", seq);
		if (n < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
