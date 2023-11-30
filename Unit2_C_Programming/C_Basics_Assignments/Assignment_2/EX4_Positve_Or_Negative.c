/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name : EX4_Positve_Or_Negative.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float num ;
	printf("Enter a number you want to check : ");
	scanf(" %f",&num);

	if(num >0)
	{
		printf("\n %f is positive",num);
	}
	else if(num<0)
	{
		printf("\n %f is negative",num);
	}
	else if(num ==0)
	{
		printf("\nyou entered zero");
	}
	return 0;
}

