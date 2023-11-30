/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment1
 * File Name : EX7_Swap_two_numbers_without_swap_variable.c
 * Data      : 30/11/2023
 * Author    :Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include<stdio.h>

int main()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float a,b;
	printf("Enter value of a : ");
	scanf("%f",&a);
	printf("\nEnter value of b : ");
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nAfter swapping, value of a = %f",a);
	printf("\nAfter swapping, value of b = %f",b);

	return 0;

}

