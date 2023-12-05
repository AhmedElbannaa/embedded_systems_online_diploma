/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q7_Check_Number_Power_3.c
 * Data      : 5/12/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>
int check_power_3(int num);
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);
	int number,i;
	for(i=0;i<2;++i)
	{
	printf("enter any number : ");
	scanf("%d",&number);

	if((number == 1)||(check_power_3(number)==0)){
		printf("%d ==> 0\n",number);
	}
	else{
		printf("%d ==> 1\n",number);
	}
	}
	return 0;
}
int check_power_3(int num)
{
	if(num%3 == 0)
		return 0;
	else
		return 1;
}

