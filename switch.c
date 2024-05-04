#include<stdio.h>

void main()
{
	char op;
	printf("enter the symbol: ");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
			printf("addition");
			break;
		case '-':
			printf("sub");
			break;
		case '*':
			printf("mul");
			break;
		default:
			printf("invalid");
			break;
	}
}