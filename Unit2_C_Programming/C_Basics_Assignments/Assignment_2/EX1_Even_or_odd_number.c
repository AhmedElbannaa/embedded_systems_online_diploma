/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name : EX1_Odd_Or_Even_number.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int num;
	printf("Enter an integer you want to check :");
	scanf(" %d",&num);

	if(num%2 == 0)
	{
		printf("\n %d is even",num);
	}
	else
	{
		printf("\n %d is odd",num);
	}

	return 0;
}
