#include<stdio.h>
int main()
{
	int layers;
	printf("Please the number of layers:");
	scanf("%d",&layers);
	for(int i=1;i<=layers;i++)
	{
		for(int j=1;j<=i;j++)
		{
				printf("*");
		}
		printf("\n");
	}
}
