/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment1
 * File Name : EX6_Swap_two_numbers.c
 * Data      : 30/11/2023
 * Author    :Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include<stdio.h>

int main()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float a,b,swap;
	printf("Enter value of a : ");
	scanf("%f",&a);
	printf("\nEnter value of b : ");
	scanf("%f",&b);

	swap=a;
	a=b;
	b=swap;

	printf("\nAfter swapping, value of a = %f",a);
	printf("\nAfter swapping, value of b = %f",b);

	return 0;

}


