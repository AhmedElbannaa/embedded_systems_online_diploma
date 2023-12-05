/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q3_Reverse_Array.c
 * Data      : 5/12/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include<stdio.h>

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int a [5];
	int i;
	printf("enter an array :");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array :");
	for (i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nReversed Array :");
	for (i=4;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}



