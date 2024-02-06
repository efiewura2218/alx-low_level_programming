#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to console
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
=======


/**
 * main- prints all possible combinations of single-digit numbers
 *
 * Return: Always 0.
 *
 */

	int main(void)
{
		int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');
	return (0);
}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
