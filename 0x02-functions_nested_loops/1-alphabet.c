#include <main.h>

/**
 * print_alphabet - Alpha
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char s;

	s ='a';
	while(s <= 'z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return;
}
