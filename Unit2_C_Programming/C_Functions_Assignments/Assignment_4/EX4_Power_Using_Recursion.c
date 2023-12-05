/******************************************************************************
 * Uint2     : Lesson5 Function >> Assignment4
 * File Name : EX4_Power_Using_Recursion.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>
int Power_Num(int b,int p);
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int base,power;
	printf("Enter base number :");
	scanf("%d",&base);
	printf("Enter power number (positive & integer) :");
	scanf("%d",&power);

	printf(" %d ^ %d = %d",base,power,Power_Num(base,power));


	return 0;
}

int Power_Num(int b,int p)
{
	if(p==1)
	{
		return b;
	}
	else if(p==0)
	{
		return 1;
	}

	return b*Power_Num(b,p-1);
}


