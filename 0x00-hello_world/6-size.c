#include <stdio.h>
/**
<<<<<<< HEAD
 * main - main block
=======
 * main - A pregramm that print the size of various types of on the computer
>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
=======
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(e));
return (0);
>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
}
