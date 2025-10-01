#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
	int n1,n2,i,count=0;
	while(scanf("%d",&n1)!=EOF && scanf("%d",&n2)!=EOF)
	{
		if(n1==EOF && n2==EOF)
		 break;
		if(n1<0 || n2<0)
			printf("Invalid input\n");
		else if(n1>0 && n2>0)
		{
			if(n1<n2)
			{
				for(n1;n1<=n2;n1++)
				{
					for(i=1;i<=n1;i++)
					{
					if(n1%i==0)
						count++;
					}
					if(count==2)
						printf("%d\n",n1);
					count*=0;
				}
			}
			else if(n1>n2)
				printf("Invalid input\n");
			
		}
	}
}
