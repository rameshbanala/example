#include<stdio.h>
int main()
{
	
	int n,m,k;
	printf("enter no of rows");
	scanf("%d",&n);
	printf("enter no of cols");
	scanf("%d",&m);
	printf("enter no of cols");
	scanf("%d",&k);
	int a[n][m];
	int b[m][k];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			printf("enter the %d-row %d-col element: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<k;j++)
		{
			printf("enter the %d-row %d-col element: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	int p[n][k];
	for(int i = 0 ;i<n;i++)
	{
		for(int j = 0;j<m;i++)
		{
			p[i][j] = 0;
			for(int l = 0;l<k;l++)
			{
				p[i][j] = p[i][j] + a[i][l]* b[l][j];
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int l = 0;l<5;l++)
		{
			printf("%d\t",p[i][l]);
		}
		printf("\n");
	}
}