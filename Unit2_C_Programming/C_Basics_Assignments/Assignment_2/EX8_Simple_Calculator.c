/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name : EX8_Simple_Calculator.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float op1,op2;
	char ch;

	printf("Enter operator either (+) or (-) or (/) or (*) : ");
	scanf("%c",&ch);

	printf("\nEnter two operands : ");
	scanf("%f %f",&op1,&op2);

	switch(ch)
	{
	case'+' :
		printf("\n %f  %c  %f = %f",op1,ch,op2,op1+op2);
		break;
	case'-' :
		printf("\n %f  %c  %f = %f",op1,ch,op2,op1-op2);
			break;
	case'/' :
		printf("\n %f  %c  %f = %f",op1,ch,op2,op1/op2);
			break;
	case'*' :
		printf("\n %f  %c  %f = %f",op1,ch,op2,op1*op2);
			break;
	default :
		printf("\ninvalid input");
	}

	return 0;
}

