#include<stdio.h> 
int main()
{
	int a,b,c,d,e;
	printf("Enter five integers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>b && a>c && a>d && a>e)
		{
		printf("From %d,%d,%d,%d,%d, the maximum number is:%d",a,b,c,d,e,a);
		}
	else if (b>a && b>c && b>d && b>e)
		{
		printf("From %d,%d,%d,%d,%d, the maximum number is:%d",a,b,c,d,e,b);
		}
	else if (c>a && c>b && c>d && c>e)
		{
		printf("From %d,%d,%d,%d,%d, the maximum number is:%d",a,b,c,d,e,c);
		}
	else if (d>a && d>b && d>c && d>e)
		{
		printf("From %d,%d,%d,%d,%d, the maximum number is:%d",a,b,c,d,e,d);
		}
	else if (e>a && e>b && e>c && e>d)
		{
		printf("From %d,%d,%d,%d,%d, the maximum number is:%d",a,b,c,d,e,e);
		}
}
