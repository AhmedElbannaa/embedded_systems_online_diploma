/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment1
 * File Name : EX5_Find_ASCII_Value_of_a_character.c
 * Data      : 30/11/2023
 * Author    :Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include<stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char a;
	printf("Enter a character : ");
	scanf(" %c",&a);

	printf("\nASCII value of %c : %d",a,a);

	return 0;
}
