/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_String
 * File Name : EX1_Frequency_of_character.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

#define MAXLENTGH 100
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char str[MAXLENTGH],ch;
	int i=0,freq=0;
	printf("Enter a string :");
	gets(str);

	printf("Enter a character to find frequency :");
	scanf("%c",&ch);

	while(str[i]!=0)
	{
		if(str[i]==ch)
		{
			freq++;
		}
		++i;
	}
	printf("frequency of %c : %d",ch,freq);

	return 0;
}
