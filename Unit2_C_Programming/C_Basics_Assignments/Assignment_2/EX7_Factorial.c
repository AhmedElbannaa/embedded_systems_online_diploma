/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name : EX7_Factorial.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int num,i,fact=1;
	printf("Enter an integer : ");
	scanf("%d",&num);

	if(num<0)
	{
		printf("\nError !!!! Factorial of negative number doesn't exist ");
	}
	else if (num==0)
	{
		printf(" factorial of %d is : %d",num,fact);
	}
	else if (num>0)
	{
	for(i=1;i<=num;i++)
	{
		fact *= i ;
	}
	printf(" factorial of %d is : %d",num,fact);
	}


	return 0;
}
