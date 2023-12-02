/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_String
 * File Name : EX3_Reverse_String.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAXLENTGH 100
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char str1[MAXLENTGH],str2[MAXLENTGH];
	int i=0,len;
	printf("Enter a string :");
	gets(str1);

	len=strlen(str1);
	while( str1[i]!=0)
	{
		str2[i]=str1[len-1];
		len--;
		i++;
	}
	str2[i] = 0;
	printf("Reverse string is : %s",str2);

	return 0;
}
