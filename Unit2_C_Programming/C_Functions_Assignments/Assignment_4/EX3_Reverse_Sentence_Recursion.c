/******************************************************************************
 * Uint2     : Lesson5 Function >> Assignment4
 * File Name : EX3_Reverse_Sentence_Recursion.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>
#include <string.h>
void Reverse_sentence(char s[],int n);
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char str[100];
	int len;
	printf("Enter a sentence :");
	gets(str);
	len=strlen(str);
	Reverse_sentence(str,len);
	printf("the modified sentence : %s",str);

	return 0;
}

void Reverse_sentence(char s[],int n)
{
	static int i=0;
	char temp;
		temp = s[i];
		s[i] = s[n-1];
		s[n-1] = temp;
		++i;
	if(i==n)
	{
		return;
	}
	Reverse_sentence(s,n-1);
}

