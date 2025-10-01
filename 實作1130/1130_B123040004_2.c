#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void level(int x){
	long long int sum=1,i;
	for(i=x;i>=1;i--){
		sum=sum*i;
	}
	printf("%lld! = %lld\n",x,sum);
}
int main(){
	int n;
	printf("Enter an integer(n):");
	scanf("%d",&n);
	while(n!=0){
		if(n<0)
		{
			printf("Please enter a positive integer.\n");
		}
		else
		{
			level(n);
		}
		printf("Enter an integer(n):");
		scanf("%d",&n);
	}
	printf("Finish!");
}
