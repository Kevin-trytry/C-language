#include<stdio.h>
int countdigits(int i){
	int count=0,temp=i;
	while(temp!=0){
		count++;
		temp/=10;
	}
	return count;
}
int armstrongnumber(int i,int digits){
	int sum=0,temp=i,j;
	while(temp!=0){
		int power=1;
		for(j=0;j<digits;j++){
			power*=temp%10;
		}
		sum+=power;
		temp/=10;
	}
	if(sum==i){
		printf("%d ",i);
		return 1;
	}
	else
		return 0;
}

int main(){
	int i,n,m,digits,find=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++){
		digits=countdigits(i);
		find+=armstrongnumber(i,digits);
	}
	if(find==0){
		printf("none");
	}
}
