/******************************************************************************
 * Uint2     : Lesson6 Structure >> Assignment 5
 * File Name : EX4_Store_Multiply_informations.c
 * Data      : 7/12/2023
 * Author    : Ahmed Mahmoud Salem Mohammed
 *****************************************************************************/
#include <stdio.h>
struct Student read_data();
void display_data(struct Student x);

struct Student{
	unsigned char name[50];
	unsigned int roll;
	unsigned int marks;
};

int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);
	struct Student students_info[10];
	int i;
	printf("Enter information of students\n");
	for(i=0;i<10;++i)
	{
		students_info[i]=read_data();
		printf("\n");
	}
	printf("Displaying information of students\n");
	for(i=0;i<10;i++)
	{
		display_data(students_info[i]);
	}

	return 0;
}
struct Student read_data()
{
	struct Student x;
	printf("For roll number :");
	scanf("%d",&x.roll);
	printf("Enter name : ");
	scanf("%s",&x.name);
	printf("Enter marks : ");
	scanf("%d",&x.marks);
	return x;
}
void display_data(struct Student x)
{
	printf("Information for roll %d\nname : %s\nmarks : %d\n",x.roll,x.name,x.marks);
}
