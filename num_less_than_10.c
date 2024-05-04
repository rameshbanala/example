#include<stdio.h>

int main()
{	
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	if(num<10)
	{
		printf("entered number is less than 10");
	}
	else
	{
		printf("entered number is not less than 10");
	}
}