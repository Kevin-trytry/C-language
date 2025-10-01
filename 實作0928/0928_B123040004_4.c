#include<stdio.h>
int main()
{
	int a;
	char ch;
	printf("Please enter am integer:");
	scanf("%d",&a);
	printf("\nPlease enter a character:");
	fflush(stdin);
	scanf("%c",&ch);
	printf("I have %d %c\'s",a,ch);
}
