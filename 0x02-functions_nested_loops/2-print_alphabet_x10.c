#include "main.h"
/**
 *main - print_alpabet_x10 this is the function
 *Description - this describes the printing of alphabet in tens
 *Return: 0
 */
void print_alphabet_x10(void)
{
char b;
int m = 0;
while (m <= 9)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
m++;
}
}

