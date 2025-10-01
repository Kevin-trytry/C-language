#include<stdio.h>
int main()
{	
	//第一題 
	printf("1.B123040004 莊志文 資訊工程學系\n\n");
	
	//第二題
	int a,b,n,sum=0,x;
	printf("2.Input:");
	scanf("%d%d",&a,&n);
	for(int i=1;i<=n;i++)
		{
		sum=sum+a,a*=10;
		x=sum;
		}
	for(int j=1;j<=n;j++)
		{
		x=x/10;
		sum=sum+x;
		}
	printf("%d\n\n",sum);
	
	//第三題
	int c,d,M,m;
	do
	{
		c=sum%10,d=sum/10%10;
		if (c>d)
			{
				M=c;
				m=d;
			}
		else if(d>c)
			{
				M=d;
				m=c;
			}
	}
	while(sum!=0);
	{
		
	}
	printf("最大的一位數字:%d\n",M);
	printf("最小的一位數字:%d\n\n",m);
		
	
	  
 } 
