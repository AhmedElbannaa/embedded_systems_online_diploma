/******************************************************************************
 * Uint2     : Lesson5 Function >> Assignment4
 * File Name : EX1_Prime_Numbers.c
 * Data      : 30/11/2023
 * Author    : Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include <stdio.h>

void check_prime_within_range(int n1,int n2);
int main(){
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	int num1,num2;
	printf("enter two numbers (intervals) :");
	scanf("%d  %d",&num1,&num2);
	check_prime_within_range(num1,num2);
	return 0;
}

void check_prime_within_range(int n1,int n2)
{
	int i,j,flag=0;
	printf("prime numbers between %d and %d : ",n1,n2);
	for (i=n1+1;i<n2;i++)
	{
		if(i==0 || i ==1)
		{
			flag=1;
			break;
		}
		else
		{
			for(j=2;j<=i/2;++j)
			{
				if(i%j==0)
				{
					flag =1;
					break;
				}
			}
			if(flag==0)
				printf ("%d ",i);

		}
		flag =0;

	}
}
