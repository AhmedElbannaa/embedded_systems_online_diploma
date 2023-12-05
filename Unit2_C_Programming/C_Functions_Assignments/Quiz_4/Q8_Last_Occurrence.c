/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q8_Last_Occurrence.c
 * Data      : 5/12/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>
#define SIZE 7
int Last_Occurrence (int a[],int n,int num);
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int i,num,arr[SIZE]={2,3,4,5,2,2,5};
	printf("Array : ");
	for (i=0;i<SIZE;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nenter number that you want to check :");
	scanf("%d",&num);

	if(Last_Occurrence(arr,SIZE,num)!=-1){
		printf("Last index = %d",Last_Occurrence(arr,SIZE,num));
	}
	else{
		printf("NOT EXIST");
	}

	return 0;
}

int Last_Occurrence (int a[],int n,int num)
{
	int i,L_index=-1;

	for(i=0;i<n;i++)
	{
		if(a[i]==num){
			L_index=i;
		}

	}

	return L_index;
}
