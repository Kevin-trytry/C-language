#include<stdio.h>
int main()
{
	//2.1
	int count1=0,i,j,k,m,n;
	
	for(i=1;i<=5;i++)	{
		for(j=1;j<=5;j++){
			for(k=1;k<=5;k++){
				for(m=1;m<=5;m++){
					for(n=1;n<=5;n++){
						if(i!=j && i!=k && i!=m && i!=n && j!=k && j!=m && j!= n && k!=m && k!=n && m!=n)
							{
							printf("%6d",i*10000+j*1000+k*100+m*10+n);
							count1++;}
		}
		}				
		}	
		}
		}
	printf("There are %d orders in total\n\n\n",count1);
	
	//2.2
	int a,b,num,count2=0,c=0;
	printf("Input a number:");
	scanf("%d",&num);
	for(a=num+1;a>num;a++)
		{
		 for(b=2;b<a;b++)
			{
				if(a%b==0)
					count2++;
			} 
			if (count2==0)
				{
				printf("%d ",a);
				c++;
				}
			if (c==5)
				{
				break;
				}
			count2*=0;
		}
	
	
 } 
