#include<stdio.h>
int main()
{
	int input,sum=0;
	printf("Please enter sum integers and use EOF to end the input:\n");
	while(scanf("%d",&input)!= EOF){
		sum=sum+input;
	}
	printf("The total sum of entered integers is:%d\n",sum);
	printf("EOF reached, program is ending");
}
