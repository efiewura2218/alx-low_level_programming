#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
=======


/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
	putchar('\n');

	return (0);
}
<<<<<<< HEAD
=======

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
