/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_Array
 * File Name : EX4_Insert_Element_In_Array.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float input;
	int loc,i,n;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
		printf("%d\t",arr[i]);
	}
	printf("\nEnter the element to be inserted :");
	scanf("%f",&input);

	printf("Enter the location :");
	scanf("%d",&loc);

	for (i=n;i>loc-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[i] = input;
	for (i=0;i<n+1;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}




