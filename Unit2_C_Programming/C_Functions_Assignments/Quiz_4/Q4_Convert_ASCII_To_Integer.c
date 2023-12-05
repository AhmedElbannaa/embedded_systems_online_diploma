/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q4_Convert_ASCII_To_Integer.c
 * Data      : 5/12/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);
	char Anum;
	unsigned int  num ,check_res;

	printf("Enter number : ");
	scanf("%c",&Anum);
	num= Anum - '0';
	printf("Integer = %d",num);
	check_res = num +5;
	printf("\nNew Integer(res) = %d",check_res);
	return 0;
}
