#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,i,j,sum=0;
	printf("enter r:");
	scanf("%d",&r);
	printf("enter c:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	j=c-1;
	for(i=0;i<r;i++)
	{
		sum=sum + a[i][j];
		j--;
	} 
	printf("sum of anti-diagonal is %d",sum);
	
	
}
