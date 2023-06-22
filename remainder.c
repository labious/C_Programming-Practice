#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num,denom,result;
	printf("Enter the nummerator\n");
	scanf("%d", & num);

	printf("Enter the denominator\n ");
	scanf("%d",& denom);
	
	result = num % denom;
	
	printf("The remainder of %d and %d is %d ", num ,denom ,result);
   	 return (0);
}
