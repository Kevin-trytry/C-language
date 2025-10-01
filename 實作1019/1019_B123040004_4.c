#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int num,random;
	random=rand()%10+1;
	printf("The number guessing game beings!\n");
	while(num!=random)
	{
	
		printf("Please enter a number(1~10):");
		scanf("%d",&num);
		if(num==random)
		{
			printf("Congratulations! The answer is %d",random);
			break;
		}
		else if(num!=random)
		{
			printf("You guessed wrong, please try again\n");
		}
	}
}
