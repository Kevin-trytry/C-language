#include<stdio.h>
int main()
{
	int a,b,c,status;
	printf("Enter three positive integers a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	if (c>a && c>b)
		status=1;
	else if (b>a && b>c)
		status=2;
	else if (a>c && a>b)
		status=3;
	switch(status)
	{
		case 1:	
			if (a+b>c)
			{
				if(a*a+b*b>c*c)
				printf("Acute Triangle");
				else if(a*a+b*b==c*c)
				printf("Roght Triangle");
				else if(a*a+b*b<c*c)
				printf("Obtuse Triangle");
			}
			else
			printf("Not a Triangle");
			break;
		case2:
			if (a+c>b)
				{
				if(a*a+c*c>b*b)
				printf("Acute Triangle");
				else if(a*a+c*c==b*b)
				printf("Roght Triangle");
				else if(a*a+c*c<b*b)
				printf("Obtuse Triangle");
				}
			else
				printf("Not a Triangle");
			break;
		case 3:
				if (b+c>a)
			{
				if(b*b+c*c>a*a)
				printf("Acute Triangle");
				else if(a*a+b*b==a*a)
				printf("Roght Triangle");
				else if(b*b+c*c<a*a)
				printf("Obtuse Triangle");
			}
			else
				printf("Not a Triangle");
			break;
	}
	
 } 
