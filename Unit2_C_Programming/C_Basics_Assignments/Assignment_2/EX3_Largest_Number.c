/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name : EX3_Largest_Number.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float n1,n2,n3,max;

	printf("Enter three numbers : ");
	scanf(" %f %f %f",&n1,&n2,&n3);

	max=n1;
	if(n2 > max)
	{
		max = n2;
	}
	if(n3 > max)
	{
		max = n3;
	}

	printf("the largest number is : %f",max);


	return 0;
}
