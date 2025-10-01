#include<stdio.h>
int main()
{
	int height,width;
	printf("height:");
	scanf("%d",&height);
	printf("width:");
	scanf("%d",&width);
	for(int i=1;i<=height;i++)
	{
		for(int j=1;j<=width;j++)
		{
			printf("*");
		}
		printf("\n");
	}
 } 
