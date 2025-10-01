#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void lcm(int n1, int n2){
	int temp1,temp2,mod;
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
			printf("LCM(%d,%d) = %d\n",temp1,temp2,(temp1/n1)*(temp2/n1)*n1);
			}
		else if(n2>n1)
			{
			while(n1!=0)
				{
				mod=n2%n1;
				n2=n1;
				n1=mod;
				}
			printf("LCM(%d,%d) = %d\n",temp1,temp2,(temp1/n2)*(temp2/n2)*n2);
			}
		else if(n1==n2)
			printf("LCM(%d,%d) = %d\n",n1,n2,n1);
}
void gcd(int n1, int n2){
	int temp1,temp2,mod;
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
			printf("gcd(%d,%d) = %d\n",temp1,temp2,n1);
			}
		else if(n2>n1)
			{
			while(n1!=0)
				{
				mod=n2%n1;
				n2=n1;
				n1=mod;
				}
			printf("gcd(%d,%d) = %d\n",temp1,temp2,n2);
			}
		else if(n1==n2)
			printf("gcd(%d,%d) = %d\n",n1,n2,n1);
}
int main(){
	int a,b;
	printf("Enter two integers:\n");
	scanf("%d%d",&a,&b);
	while(a!=0||b!=0){
		gcd(a,b);
		lcm(a,b);
		printf("Enter two integers:\n");
		scanf("%d%d",&a,&b);
	}
	if(a==0&&b==0)
	{
		printf("Finish!");
	}
}
