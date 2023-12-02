/******************************************************************************
 * Uint2     : Lesson4 Array&String >> Assignment3_Array
 * File Name : EX3_transpose_matrix.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int row,col,i,j;

	printf("Enter row and column of matrix :");
	scanf("%d %d",&row,&col);
	float a[row][col];

	printf("Enter elements of matrix :\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter elements a[%d][%d] : ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nEntered matrix :\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %.2f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nTransposed matrix :\n");
	for(j=0;j<col;j++)
	{
		for (i=0;i<row;i++)
		{
			printf(" %.2f\t",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}


