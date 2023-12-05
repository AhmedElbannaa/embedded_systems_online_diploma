/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q5_Clear_A_Specified_Bit.c
 * Data      : 5/12/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int num ,pos;
	printf("Input Number :");
	scanf("%d",&num);
	printf("Bit Position :");
	scanf("%d",&pos);

	num &= ~(1<<pos);

	printf("result : %d",num);



	return 0;
}

