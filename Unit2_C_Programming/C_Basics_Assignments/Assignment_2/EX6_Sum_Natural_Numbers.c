/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name :  EX6_Sum_Natural_Numbers.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int n ,i,sum=0;
	printf("Enter a positive number : ");
	scanf(" %d",&n);

	for (i=0;i<=n;i++)
	{
		sum += i;
	}

	printf("Sum = %d",sum);

	return 0;
}
