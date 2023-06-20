#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* function declaration */ 
int max(int num1,int num2);

int main(void)
{	
	int a = 100;
	int b = 350;
	int ret;
	/* function call */
	ret = max(a,b);

	printf("Max value is  : %d\n", ret );
	return (0);
}

/*function returning max betwixt 2 numbers*/
int max(int num1, int num2)
{
	/*Local variable*/
	int result;
	if(num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}
