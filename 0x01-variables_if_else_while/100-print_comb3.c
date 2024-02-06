#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print numbers from 0 to 99.
 * Numbers must be separated by commas followed by a space.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 100; a++)
	{
		b = a / 10;
		c = a % 10;

		putchar(b + '0');
		putchar(c + '0');

		if (a < 99)
		{
=======


/**
 * main -prints all possible different combinations of two digits
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
			continue;


>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
			putchar(',');
			putchar(' ');
		}
	}
<<<<<<< HEAD
	putchar('\n');

	return (0);
}
=======

	putchar('\n');

	return (0);

}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
