#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num,denom,result;
	printf("Enter the nummerator");
	scanf(num);

	printf("Enter the denominator");
	scanf(denom);
	
	result = num % denom;

   	 return (0);
}
