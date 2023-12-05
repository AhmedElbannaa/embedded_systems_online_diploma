/******************************************************************************
 * Uint2     : Quiz 4 >> Function
 * File Name : Q1_Check_User_Name.c
 * Data      : 5/12/2023
 * Author    :Ahmed mahmoud salem mohammed
 *****************************************************************************/
#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
void check_user_name (char user[MAXSIZE]);
const char name[MAXSIZE]="Ahmed Elbanna";
int main ()
{
	//To solve input/output buffer bug in eclipse
	setbuf(stdout,NULL);

	char user_name[MAXSIZE];
	for(int i=0;i<2;i++)
	{
		printf("Enter User Name : ");
		gets(user_name);

		check_user_name(user_name);
		printf("\n");
	}
	return 0;
}

void check_user_name (char user[MAXSIZE])
{
	if(stricmp(user,name)==0)
	{
		printf("Correct");
	}
	else
	{
		printf("Wrong");
	}
}
