#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
	int n1,n2,mod,temp1,temp2;
	while(scanf("%d",&n1)!=0 && scanf("%d",&n2)!=0){
		if(n1==0 && n2 ==0)
			break;
		temp1=n1;
		temp2=n2;
		if(n1>n2)	
			{
			while(n2!=0)
				{
				mod=n1%n2;
				n1=n2;
				n2=mod;
				}
			printf("LCM of %d and %d is: %d\n",temp1,temp2,(temp1/n1)*(temp2/n1)*n1);
			}
		else if(n2>n1)
			{
			while(n1!=0)
				{
				mod=n2%n1;
				n2=n1;
				n1=mod;
				}
			printf("LCM of %d and %d is: %d\n",temp1,temp2,(temp1/n2)*(temp2/n2)*n2);
			}
		else if(n1==n2)
			printf("LCM of %d and %d is: %d\n",n1,n2,n1);
		
	}
	printf("Finish!");
}
