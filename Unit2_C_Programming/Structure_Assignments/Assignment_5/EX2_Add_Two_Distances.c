/******************************************************************************
 * Uint2     : Lesson6 Structure >> Assignment 5
 * File Name : EX2_Add_Two_Distances.c
 * Data      : 7/12/2023
 * Author    : Ahmed Mahmoud Salem Mohammed
 *****************************************************************************/
#include <stdio.h>
struct distance add_two_distances(struct distance x1 , struct distance x2);
struct distance read_data(int n );
void display_data(struct distance x);

struct distance{
	int feet;
	float inch;
};

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);
	struct distance s1,s2,r;

	s1=read_data(1);
	s2=read_data(2);
	r=add_two_distances(s1,s2);
	display_data(r);

	return 0;
}
struct distance read_data(int n )
{
	struct distance x;
	printf("Enter informations for %dst distance :\n",n);
	printf("Enter feet : ");
	scanf("%d",&x.feet);
	printf("Enter inch : ");
	scanf("%f",&x.inch);

	return x;

}
struct distance add_two_distances(struct distance x1 , struct distance x2)
{
	struct distance result;

	result.feet = x1.feet + x2.feet;
	result.inch = x1.inch + x2.inch;

	if(result.inch >=12){
		result.feet++;
		result.inch -= 12;
	}

	return result;
}
void display_data(struct distance x)
{

	printf("Sum Of Distances : %d feet , \t%.2f inch",x.feet,x.inch);
}

