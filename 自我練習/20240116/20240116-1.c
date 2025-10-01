#include<stdio.h>
int sum(int n);

int main(){
	int n=4;
	printf("%d",sum(n));
}

int sum(int n){
	if(n==1)
		return 1;
	else
		return n+sum(n-1);
}
