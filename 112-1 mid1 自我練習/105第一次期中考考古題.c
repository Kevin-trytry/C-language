#include<stdio.h>
int main()
{
	//題組一
	printf("part1\n");
	printf("1."); 
	printf("B123040054 莊志文 資訊工程學系\n\n\n");

	printf("2.Input:");
	int N;
	scanf("%d",&N);
	printf("%d\n\n",123040054%2016*N);
	
	printf("3.");
	int	M=123040054%2016*N;
	int m1=M/10000,m2=M/1000%10,m3=M/100%10,m4=M/10%10,m5=M%10;
	if (m1>m2 && m1>m3 && m1>m4 && m1>m5)
		{printf("%d\n\n",m1);}
	else if (m2>m1 && m2>m3 && m2>m4 && m2>m5) 
		{printf("%d\n\n",m2);}
	else if (m3>m1 && m3>m2 && m3>m4 && m3>m5)
		{printf("%d\n\n",m3);}
	else if (m4>m1 && m4>m2 && m4>m3 && m4>m5)
		{printf("%d\n\n",m4);} 
	else
		{printf("%d\n\n",m5);}
		
	printf("4.\n");
	float volume=3.1415926*5*5*N,surface=3.1415926*10*2+3.1415926*10*N;
	printf("%f\n",surface);
	printf("%f\n\n\n",volume);
	
	//題組2
	printf("part2\n");
	printf("1.");
	int n1,n2,n3,n4,n5;
	printf("Input:");
	scanf("%d%d%d",&n1,&n2,&n3); 
	n5=n1-n2*n3;
	n4=n1*n2+n3;
	printf("n1=   %d\n",n1);
	printf("n2=   %d\n",n2);
	printf("n3=   %d\n",n3);
	printf("n4=   %d\n",n4);
	printf("n5=   %d\n\n\n",n5);
	
	printf("2.\n");
	if (n1>0)
		printf("n1   =%d\n",n1);
	else if (n1<0)
		printf("n1   =%d\n",-n1);
	else 
		printf("%d\n",1*1);
		
	if (n2>0)
		printf("n2   =%d\n",n2);
	else if (n2<0)
		printf("n2   =%d\n",-n2);
	else 
		printf("%d\n",2*2);
		
	if (n3>0)
		printf("n3   =%d\n",n3);
	else if (n3<0)
		printf("n3   =%d\n",-n3);
	else 
		printf("%d\n",3*3);
		
	if (n4>0)
		printf("n4   =%d\n",n4);
	else if (n4<0)
		printf("n4   =%d\n",-n4);
	else 
		printf("%d\n",4*4);
		
	if (n5>0)
		printf("n5   =%d\n\n\n",n5);
	else if (n5<0)
		{
		n5=-n5;
		printf("n5   =%d\n\n\n",n5);
		}
	else 
		printf("%d\n\n\n",5*5);
		
		
	printf("3.\n");
	int rem1;
	if (n1>n2)
		{
			while(n2!=0)
			{
				rem1=n1%n2;
				n1=n2;
				n2=rem1;
			}
			printf("%d\n\n",n1);
		}
	else if (n1<n2)
		{
			while(n1!=0)
			{
				rem1=n2%n1;
				n2=n1;
				n1=rem1;
			}
			printf("%d\n\n",n2);
		}
	else
		{printf("%d\n\n",n1);}
		
	printf("4.\n");
	int i1=n3,i2=n4,rem2;
	if (n3>n4)
		{
			while(n4!=0)
			{
				rem2=n3%n4;
				n3=n4;
				n4=rem2;
			}
			printf("%d\n;\n",n3*(i1/n3)*(i2/n3));
			
		}
	else if (n3<n4)
		{
			while(n3!=0)
			{
				rem2=n4%n3;
				n4=n3;
				n3=rem2;
			}
			printf("%d\n\n",n4*(i1/n4)*(i2/n4));
		}
	else
		{printf("%d\n\n",n3);}
	
	printf("5.\n");
	int count=0,i,j;
	for(j=1;j<=n5;j++)
		{
		
		if (n5%j==0)
			{
				for(i=1;i<=j;i++)
				{
					if(j%i==0)
						count++;
				}
				
				if(count==2)
					{
					printf("%3d",j);
					}
				count*=0;
			}
		else if(n5==1)
			printf("無");	
		}
 } 
