#include<stdio.h>
//Fibbonaci
int fib(int n){
	if(n<=1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	printf("Please enter the nth number of Fibbonaci series:");
	scanf("%d",&n);
	printf("The %d number of Fibbonaci series is:%d",n,fib(n));
}
