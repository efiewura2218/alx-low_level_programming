#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print the alphabet in lowercase and uppercase on same line
 * using putchar only thrice, followed by new line
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
alpha = 'A';
while (alpha <= 'Z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
=======


/**
 *  main - program that prints the alphabet in lowercase and upper case
 *
 *  Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
