#include<stdio.h>
int main()
{
	
	int i,j,l,count1=0,count2=0,count3=0,temp1,temp2,temp3;
	printf("Please input a range[i,j]:");
	scanf("%d%d",&i,&j);
	while(1){
	
	for(i;i<=j;i++)
	{
		if(i/100==0)
		{
			l=i;
			for(int m=1;m<=2;m++)
			{
				temp1=l%10;
				temp2=l/10;
				temp3=temp1*10+temp2;
				for(int k=1;k<=temp3;k++)
				{
					if(temp3%k==0)
						{count1++;}
				}
				if(count1!=2)
					{
						l=temp3;
						count1*=0;
						continue;
					}
				else if (count1==2)
					{count2++;
					count1*=0;
					l=temp3;}
			}
			if (count2!=2)
				{
				count2*=0;
				continue;
				}
			else if (count2==2)
					{count3++;
					count2*=0;}
			
			
		}
		
		else if(i/1000==0)
		{
		 	l=i;
			for(int m=1;m<=3;m++)
			{
				temp1=l%10;
				temp2=l/10;
				temp3=temp1*100+temp2;
				for(int k=1;k<=temp3;k++)
				{
					if(temp3%k==0)
						{count1++;}
				}
				if(count1!=2)
					{
						l=temp3;
						count1*=0;
						continue;
					}
				else if (count1==2)
					{count2++;
					count1*=0;
					l=temp3;}
			}
			if (count2!=3)
				{
				count2*=0;
				continue;
				}
			else if (count2==3)
					{count3++;
					count2*=0;}
		} 
		
		else if(i/10000==0)
		{
			l=i;
			for(int m=1;m<=4;m++)
			{
				temp1=l%10;
				temp2=l/10;
				temp3=temp1*1000+temp2;
				for(int k=1;k<=temp3;k++)
				{
					if(temp3%k==0)
						{count1++;}
				}
				if(count1!=2)
					{
						l=temp3;
						count1*=0;
						continue;
					}
				else if (count1==2)
					{count2++;
					count1*=0;
					l=temp3;}
			}
			if (count2!=4)
				{
				count2*=0;
				continue;
				}
			else if (count2==4)
					{count3++;
					count2*=0;}
		} 
		
		else if(i/100000==0)
		{
			l=i;
			for(int m=1;m<=5;m++)
			{
				temp1=l%10;
				temp2=l/10;
				temp3=temp1*10000+temp2;
				for(int k=1;k<=temp3;k++)
				{
					if(temp3%k==0)
						{count1++;}
				}
				if(count1!=2)
					{
						l=temp3;
						count1*=0;
						continue;
					}
				else if (count1==2)
					{count2++;
					count1*=0;
					l=temp3;}
			}
			if (count2!=5)
				{
				count2*=0;
				continue;
				}
			else if (count2==5)
					{count3++;
					count2*=0;}
		}
		
		else 
		{
			l=i;
			for(int m=1;m<=6;m++)
			{
				temp1=l%10;
				temp2=l/10;
				temp3=temp1*100000+temp2;
				for(int k=1;k<=temp3;k++)
				{
					if(temp3%k==0)
						{count1++;}
				}
				if(count1!=2)
					{
						l=temp3;
						count1*=0;
						continue;
					}
				else if (count1==2)
					{count2++;
					count1*=0;
					l=temp3;}
			}
			if (count2!=6)
				{
				count2*=0;
				continue;
				}
			else if (count2==6)
					{count3++;
					count2*=0;}
		}	
	}
	if(count3==0)
		printf("No circular primes.\n\n");
	else
		printf("%d circular primes\n\n",count3);
	count3*=0;
	printf("Please input a range[i,j]:");
	scanf("%d%d",&i,&j);
	}	
	
	
 } 
