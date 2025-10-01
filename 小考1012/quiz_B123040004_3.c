#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three positive integers a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if (c>a && c>b)
		if (a+b>c)
			{
				if(a*a+b*b>c*c)
				printf("Acute Triangle");
				else if(a*a+b*b==c*c)
				printf("Right Triangle");
				else if(a*a+b*b<c*c)
				printf("Obtuse Triangle");
			}
		else
			printf("Not a Triangle");
	else if (b>a && b>c)
		if (a+c>b)
			{
				if(a*a+c*c>b*b)
				printf("Acute Triangle");
				else if(a*a+c*c==b*b)
				printf("Right Triangle");
				else if(a*a+c*c<b*b)
				printf("Obtuse Triangle");
			}
		else
			printf("Not a Triangle");
	else if (a>c && a>b)
		if (b+c>a)
			{
				if(b*b+c*c>a*a)
				printf("Acute Triangle");
				else if(a*a+b*b==a*a)
				printf("Right Triangle");
				else if(b*b+c*c<a*a)
				printf("Obtuse Triangle");
			}
		else
			printf("Not a Triangle");
		
}
