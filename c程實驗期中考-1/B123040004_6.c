#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
	int n,x=2,y=1,i,j,k,count,base=1;
	printf("n=");
	while(scanf("%d",&n)!=0){
		if(n==0)
			break;
		else if(n<=0)
			printf("Invalid input.\n");
		
		else if(n>0)
			{
				for(i=0;i<=n;i++){
					for(j=0;j<=n;j++){
						if(x*i+y*j==n)
							{
								k=i+j;
								for(base=k;k>=1;k--)
								{
									base*=k;
								}
								count+=base/i/j;
							}
					}
				}
				printf("Number of ways: %d\n",count);
				count*=0;
			}
	
		printf("n=");
		
	}
	printf("Finish!");
}
