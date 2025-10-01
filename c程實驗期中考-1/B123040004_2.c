#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
	int N,temp,i,k;
	printf("N=");
	while(scanf("%d",&N)!=0)
	{
		temp=N;
		if(N==0)
			break;
		if(N%2==0 || N<0 )
			printf("Please enter a valid number.\n");
		else if(N%2!=0)
			{
				int count=1;
				for(N;N>=1;N-=2)
				{
					for(i=1;i<=N;i++)
					{
					printf("*");
					}
					printf("\n");
					if (N==1)
					 break;
					for(k=1;k<=count;k++)
						{printf(" ");}
					count++;
				}
				count=temp/2;
				for(N=3;N<=temp;N+=2)
				{
					
					for(k=1;k<=count-1;k++)
						{printf(" ");}
					for(i=1;i<=N;i++)
					{
					printf("*");
					}
					count--;
					printf("\n");
				}
				printf("Please enter a valid number.\n");
			}
		
		printf("N=");
	}
	printf("Finish!");
}
