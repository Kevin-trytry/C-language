#include<stdio.h>
int main()
{
	int x,y=0,t,a,b,m=0;
	printf("Enter an integrer:");
	scanf("%d",&x);
	t=x;
	a=t;
	while(x!=0)
		{
		y=x%10+y*10,x/=10;
		}
	b=y;
	printf("Reversed number:%d\n",y);
	//求最大公因數 
	if(t>y){
		while(y!=0)
		{
			m=t%y;
			t=y;
			y=m;
		}
		printf("GCD of %d and %d is %d",a,b,t);
	}
	else
		{
		while(t!=0)
		{
			m=y%t;
			y=t;
			t=m;
		}
		printf("GCD of %d and %d is %d",a,b,y);
	}
}
