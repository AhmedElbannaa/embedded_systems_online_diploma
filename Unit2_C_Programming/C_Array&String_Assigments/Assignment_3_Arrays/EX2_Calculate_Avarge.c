/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_Array
 * File Name : EX2_Calculate_average.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int num ,i;
	printf("Enter the numbers of data :");
	scanf("%d",&num);
	float a[num] , sum=0;
	for(i=0;i<num;++i)
	{
		printf("%d. Enter number :",i+1);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("Average = %.3f",sum/num );

	return 0;
}
