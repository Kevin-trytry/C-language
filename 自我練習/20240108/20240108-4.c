#include<stdio.h>
long long f(long long n);
long long g(long long n);
int main(){
	long long int n,temp;
	while(scanf("%lld",&n)!=EOF){
		printf("%lld %lld\n",f(n),g(n));
	}
	
}

long long f(long long n){
	if(n==1)
		return 1;
	return f(n-1)+n;
}

long long g(long long n){
	if(n==1)
		return 1;
	return f(n)+g(n-1);
}
