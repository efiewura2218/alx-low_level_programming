#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
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
<<<<<<< HEAD
		printf("%i", a);
	}
	putchar('\n');

	return (0);
}
=======
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
