#include<stdio.h>
int main()
{
	int x,y;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		printf("x+y=%d\n",x+y);
		printf("x-y=%d\n",x-y);
		printf("x*y=%d\n",x*y);
		if(y==0)
			printf("error\n");
		else	
			printf("x/y=%f\n",x*1.0/y*1.0);
	}
}
