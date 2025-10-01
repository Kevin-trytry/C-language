#include<stdio.h>
int main()
{
	int input,i=0;
	printf("Please enter a number (0~100):");
	scanf("%d",&input);
	printf("Ouput an even number less than %d\n",input);
	while(i<input)
	{
		printf("%d is an even number\n",i);
		i+=2;
	}
 } 
