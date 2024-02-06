#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
=======
 * main - this is the main function for
 * Return:0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
=======
	/* your code goes there */
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
	return (0);
}
