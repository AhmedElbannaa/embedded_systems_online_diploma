/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_Array
 * File Name : EX1_Sum_Two_Matrix.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float a[2][2],b[2][2];
	int i,j;

	printf("Enter te elements of 1st matrix \n");
	for (i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("enter a(%d,%d) : ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter te elements of 2st matrix \n");
	for (i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("enter b(%d,%d) : ",i,j);
			scanf("%f",&b[i][j]);
		}
	}

	printf("sum of matrix : \n");
	for (i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			a[i][j] += b[i][j];
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

