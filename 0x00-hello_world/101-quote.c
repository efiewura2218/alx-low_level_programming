<<<<<<< HEAD
#include "stdio.h"
#include "string.h"
#include "unistd.h"
/**
 * main - main block
=======
#include <stdio.h>
#include <unistd.h>
/**
 * main - exact printing
>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
 * Return: 1
 */
int main(void)
{
<<<<<<< HEAD
int len;
len = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
=======
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
>>>>>>> 739ca84037d4b329c3ce42e6cde0f0d626ae99c2
return (1);
}
