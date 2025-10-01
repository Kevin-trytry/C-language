#include<stdio.h>
int main(){
	int n,m,i;
	while(scanf("%d%d", &n, &m)!=EOF){
		int sum=0,count=0;
		for(i=n;i<=m;i++){
			sum+=i;
			count++;
			if(sum>m)
				break;
		}
		printf("%d\n",count);
	}
} 
