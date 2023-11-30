/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment1
 * File Name : EX4_Multiply_two_floating_numbers.c
 * Data      : 30/11/2023
 * Author    :Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include<stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float num1,num2;
	printf("Enter two numbers : ");
	scanf("%f\n%f",&num1,&num2);
	printf("\nproduct : %f",num1*num2);

	return 0;
}
