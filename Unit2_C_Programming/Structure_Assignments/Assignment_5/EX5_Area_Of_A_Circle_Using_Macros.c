/******************************************************************************
 * Uint2     : Lesson6 Structure >> Assignment 5
 * File Name : EX5_Area_Of_A_Circle_Using_Macros.c
 * Data      : 7/12/2023
 * Author    : Ahmed Mahmoud Salem Mohammed
 *****************************************************************************/
#include <stdio.h>
#define pi 3.1415
#define AREA_OF_A_CIRCLE(R) (pi*R*R)
int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	float radius;
	printf("Enter the radius: ");
	scanf("%f",&radius);
	printf("Area= %0.2f",AREA_OF_A_CIRCLE(radius));

	return 0;
}

