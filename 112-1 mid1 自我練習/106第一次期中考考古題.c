#include<stdio.h>
int main()
{	
	//�Ĥ@�D 
	printf("1.B123040004 ���Ӥ� ��T�u�{�Ǩt\n\n");
	
	//�ĤG�D
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
	
	//�ĤT�D
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
	printf("�̤j���@��Ʀr:%d\n",M);
	printf("�̤p���@��Ʀr:%d\n\n",m);
		
	
	  
 } 
