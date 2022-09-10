#include <stdio.h>
#include <stdlib.h>

/**
 * main - Upper Lower
 *
 * Description: Print all uppper and lower case alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;
	char CH;

	ch = 'a';	
	CH = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH = CH + 1;
	}
        putchar('\n');
        return (0);
}
