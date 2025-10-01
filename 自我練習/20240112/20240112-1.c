#include<stdio.h>
int divideflat(int n);

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",divideflat(n));
	}
}

int divideflat(int n){
	if (n==1)
		return 2;
	else 
		return divideflat(n-1)+(n*n-n+2)/2;
}
