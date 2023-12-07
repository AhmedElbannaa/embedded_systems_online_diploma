/******************************************************************************
 * Uint2     : Lesson6 Structure >> Assignment 5
 * File Name : EX1_Store_Informations.c
 * Data      : 7/12/2023
 * Author    : Ahmed Mahmoud Salem Mohammed
 *****************************************************************************/
#include <stdio.h>
struct data_student read_data();
void display_data(struct data_student x);

struct data_student{
	unsigned char name[50];
	unsigned int roll;
	unsigned int marks;
};

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	struct data_student student1 =read_data() ;
	display_data(student1);
	return 0;
}
struct data_student read_data()
{
	struct data_student x;
	printf("Enter informations of students :\n");
	printf("Enter Name : ");
	gets(x.name);
	printf("Enter roll number : ");
	scanf("%d",&x.roll);
	printf("Enter marks : ");
	scanf("%d",&x.marks);

	return x;

}
void display_data(struct data_student x)
{
	printf("Displaying Informations :\n");
	printf("name :%s\nroll :%d\nmarks :%d",x.name,x.roll,x.marks);
}
