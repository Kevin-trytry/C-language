#include<stdio.h>
int main()
{
	int m,n,temp;
	printf("Please input a pair of integers(m,n):");
	scanf("%d%d",&m,&n);
	while(1){
		if(n==0)
			printf("Wrong input, input again!\n\n");
		else if(m==0)
			printf("0 is not the power of any number, input again!\n\n");
		else
			{
				temp=n;
				while(m>n)
					{
						n=n*temp;
					}
				if(m==n)
					printf("%d is the power of %d\n\n",m,temp);
				else 
					printf("%d is not the power of %d\n\n",m,temp);
			}
		printf("Please input a pair of integers(m,n):");
		scanf("%d%d",&m,&n);
	}
 } 
