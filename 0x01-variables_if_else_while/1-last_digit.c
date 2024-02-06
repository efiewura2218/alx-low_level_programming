<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m;
>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
<<<<<<< HEAD

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, m);

	return (0);
}
=======
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
