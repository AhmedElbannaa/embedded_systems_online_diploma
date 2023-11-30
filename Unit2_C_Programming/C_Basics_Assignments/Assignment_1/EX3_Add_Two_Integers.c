/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment1
 * File Name : EX3_Add_Two_Integers.c
 * Data      : 30/11/2023
 * Author    :Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include<stdio.h>

int main ()
{
	int num1 , num2;
	printf("Enter two integers : ");
	fflush(stdout);
	scanf("%d\n%d",&num1,&num2);

	printf("Sum : %d",num1+num2);
}
