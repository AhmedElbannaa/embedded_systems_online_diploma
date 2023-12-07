/******************************************************************************
 * Uint2     : Lesson6 Structure >> Assignment 5
 * File Name : EX3_Add_Two_Complex_Numbers.c
 * Data      : 7/12/2023
 * Author    : Ahmed Mahmoud Salem Mohammed
 *****************************************************************************/
#include <stdio.h>
struct ComlexNum ReadData ();
struct ComlexNum AddComplexNumbers(struct ComlexNum x1 ,struct ComlexNum x2);
void DisplayData (struct ComlexNum x);

struct ComlexNum{
	float real;
	float img;
};

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	struct ComlexNum n1,n2,res;
	printf("For 1st complex number\n");
	n1=ReadData();
	printf("For 2st complex number\n");
	n2=ReadData();
	res = AddComplexNumbers(n1,n2);
	DisplayData(res);
	return 0;
}
struct ComlexNum ReadData ()
{
	struct ComlexNum x;
	printf("Enter real and imaginary respectively : ");
	scanf("%f %f",&x.real,&x.img);
	return x;
}
struct ComlexNum AddComplexNumbers(struct ComlexNum x1 ,struct ComlexNum x2)
{
	struct ComlexNum r;
	r.real = x1.real + x2.real;
	r.img = x1.img + x2.img ;
	return r;
}
void DisplayData (struct ComlexNum x)
{
	printf("Sum = %.2f + %.2fi",x.real,x.img);
}

