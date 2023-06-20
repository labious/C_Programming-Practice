#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b1 = 0b00000010;
	char b2 = 0b00000011;
	char b3;

	printf("%d",b2 & b1);
	printf("%d", b2 >> b1);
	printf("%d", b2 >> 1);
    return (0);
}
