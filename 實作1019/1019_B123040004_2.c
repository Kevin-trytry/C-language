#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int count,random,sum=0;
	printf("Enter the number of random:");
	scanf("%d",&count);
	printf("Random numbers:\n");
	for(int i=1;i<=count;i++)
	{
		random=rand()%500+1;
		if(i==1)
			{
				printf("The first random number %d\n",random);
			}
		else if(i==2)
			{
				printf("The second random number %d\n",random);
			}	
		else if(i==3)
			{
				printf("The third random number %d\n",random);
			}
		else 
			{
			printf("The %dth random %d\n",i,random);
			}
		sum=sum+random;
	}
	printf("The sum is:%d",sum);
}
