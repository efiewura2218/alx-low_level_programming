#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * You are not allowed to use any variable of type char.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` twice.
 * Return: 0
 */
=======
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char below 10
 * Return: Always 0 (success)
 */

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
<<<<<<< HEAD

	return (0);
}
=======
	return (0);
}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
