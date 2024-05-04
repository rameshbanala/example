#include<stdio.h>
int main()
{

	int n,m;
	printf("enter no of rows ");
	scanf("%d",&n);
	printf("enter no of cols ");
	scanf("%d",&m);
	int a[n][m];
	int b[n][m];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			printf("enter the %d-row %d-col element: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			printf("enter the %d-row %d-col element: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	/*int sum[n][m];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}*/
	
	
		
}