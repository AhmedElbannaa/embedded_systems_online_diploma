/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name : EX5_Check_Alphabet.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char ch;
	printf("Enter a character : ");
	scanf(" %c",&ch);

	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("\n%c is an alphabet",ch);
	}
	else
	{
		printf("\n%c is not an alphabet",ch);
	}
	return 0;
}

