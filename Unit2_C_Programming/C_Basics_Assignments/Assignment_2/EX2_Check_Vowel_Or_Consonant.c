/******************************************************************************
 * Uint2     : Lesson3_C Basics >> Assignment2
 * File Name : EX2_Check_Vowel_Or_Consonant.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/

#include <stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char input;
	printf("Enter an alphabet : ");
	scanf("%c",&input);

	switch(input)
	{
	case 'a' :
	case 'A' :
	case 'e' :
	case 'E' :
	case 'o' :
	case 'O' :
	case 'i' :
	case 'I' :
	case 'u' :
	case 'U' :
		printf("\n %c is Vowel",input);
		break;
	default :
		printf("\n %c is Consonant",input);

	}
	return 0;
}
