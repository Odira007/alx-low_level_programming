#include <stdio.h>

/**
 * main - program that prints either number or fizzbuzz
 *
 * Return: returns 0
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}
		n++;
	}
	printf("\n");
	return (0);
}
