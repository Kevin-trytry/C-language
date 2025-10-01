#include<stdio.h>
int chunk(int n);

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",chunk(n));
	}
} 

int chunk(int n){
	if(n==1)
		return 2;
	return chunk(n-1)+2*(n-1);
}
