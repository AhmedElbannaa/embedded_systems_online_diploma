/******************************************************************************
 * Uint2     : Lesson5 Function >> Assignment4
 * File Name : EX2_Factorial_Recursion.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int factorial_recursion (int n);
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int num ;
	printf("Enter a positive integer :");
	scanf("%d",&num);

	printf("factorial of %d is : %d",num,factorial_recursion(num));

	return 0;
}

int factorial_recursion (int n)
{
	if(n>1)
	{
	return n*factorial_recursion(n-1); ;
	}
	else
	return 1;
}

