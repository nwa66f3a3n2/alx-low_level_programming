#include <stdio.h>

/**
 * main - print all single digit number of base 10 starting from 0,
 *     only using putchar and without char variables.
 *
 * Return: 0
 */

int main(void)
{
		int num;

			for (num = 0; num <= 1o; num++)
			putchar((num % 10) + '10');

			putchar('\n');

			return (0);
}
