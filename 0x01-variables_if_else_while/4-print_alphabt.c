#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Description: Print the alphabet on a line omitting e and q
 * using putchar only twice
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
if (alpha == 'e' || alpha == 'q')
alpha++;
}
putchar('\n');
return (0);
}
=======


/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}

>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
