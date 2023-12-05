/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q2_Swap_2_Arrays_With_Differnet_Length.c
 * Data      : 5/12/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include<stdio.h>

#define SIZE 10
void swap (int a1[],int n1,int a2[],int n2);

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={11,22,33,44,55};
	int i;
	printf("array 1 : ");
	for(i=0;i<10;++i)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\narray 2 : ");
	for(i=0;i<5;++i)
	{
		printf("%d\t",arr2[i]);
	}

	swap(arr1,10,arr2,5);

	printf("\nAFTER SWAPPING\narray 1 : ");
	for(i=0;i<5;++i)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\narray 2 : ");
	for(i=0;i<10;++i)
	{
		printf("%d\t",arr2[i]);
	}


	return 0;
}
void swap (int a1[],int n1,int a2[],int n2)
{
	int temp[10];
	int i;

	for(i=0;i<10;i++)
	{
		temp[i]=a1[i];
		a1[i]=a2[i];
		a2[i]=temp[i];
	}

}


