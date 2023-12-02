/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_String
 * File Name : EX2_Length_string.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

#define MAXLENTGH 100
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char str[MAXLENTGH];
	int i=0,len=0;

	printf("Enter a string :");
	gets(str);

	while(str[i]!=0)
	{
		len++;
		i++;
	}

	printf("Length of string : %d",len);

	return 0;
}


