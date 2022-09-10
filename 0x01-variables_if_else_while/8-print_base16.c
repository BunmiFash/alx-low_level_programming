#include<stdio.h>
/**
 * main - Entry point
 * Descriptiom: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;

	int hex;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	{
		putchar('\n');
	}
	return (0);

}
