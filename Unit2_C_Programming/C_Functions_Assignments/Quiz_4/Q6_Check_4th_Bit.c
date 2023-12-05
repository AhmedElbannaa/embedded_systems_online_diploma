/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q6_Check_4th_Bit.c
 * Data      : 5/12/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

unsigned int check_4th_Bit (unsigned int n);
void Print_binary(unsigned int Number);
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	unsigned int num,x;
	printf("Enter number in decimal : ");
	scanf("%d",&num);
	printf("%d in binary : ",num);
	Print_binary(num);
	x=check_4th_Bit(num);
	if(x==8)
	{
		printf("\n4th least significant bit is : 1");
	}
	else
		printf("\n4th least significant bit is : 0");
	return 0;
}

unsigned int check_4th_Bit (unsigned int n)
{
	return (n & (1<<3)) ;
}
void Print_binary(unsigned int Number)
{
	unsigned int mask=0x80000000;
	unsigned int i;
	for(i=0;i<32;i++)
	{
		if((Number<<i) & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}



