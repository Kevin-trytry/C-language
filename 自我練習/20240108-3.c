#include<stdio.h>
int main(){
	int left,right,sum,count;
	while(scanf("%d%d",&left,&right)!=EOF){
		sum=0,count=0;
		for(left;left<=right;left++){
			sum+=left;
			count++;
			if(sum>right)
				break;
		}
		printf("%d\n",count);
	}
}
