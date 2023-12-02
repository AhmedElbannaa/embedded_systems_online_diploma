/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_Array
 * File Name : EX5_Search_Elemnet_In_Array.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int n,i,loc;
	printf("enter number of elements :");
	scanf("%d",&n);
	float arr[n],num;
	printf("enter  elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%.2f\t",arr[i]);
	}
	printf("\nenter the element to be searched :");
	scanf("%f",&num);

	for(i=0;i<n;++i)
	{
		if(arr[i]==num)
		{
			loc=i+1;
			printf("\nNumber found at location : %d",loc);
			break;
		}
	}

	return 0;
}

