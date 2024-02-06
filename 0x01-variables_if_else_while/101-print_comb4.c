#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 6 times.
 * You are not allowed to use any variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 1000; a++)
	{
		b = a / 100; /* hundreds */
		c = (a / 10) % 10; /* tens */
		d = a % 10; /* singles */

		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');

			if (a < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
=======


/**
 * main - prints all possible different combinations of three digits.
 * in ascending order separated by comma followed by space
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar(' ');

			}
		}
	}

		putchar('\n');

		return (0);

}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
