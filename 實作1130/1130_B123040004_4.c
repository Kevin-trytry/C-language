#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void permutation(int n1, int n2){
	long long int sum1=1,i,sum2=1;
	for(i=n1;i>=1;i--){
		sum1=sum1*i;
	}
	for(i=n1-n2;i>=1;i--){
		sum2=sum2*i;
	}
	printf("The P(%lld,%lld) is %lld\n",n1,n2,sum1/sum2);
}
void combination(int n1, int n2){
	long long int sum1=1,i,sum2=1,sum3=1;
	for(i=n1;i>=1;i--){
		sum1=sum1*i;
	}
	for(i=n1-n2;i>=1;i--){
		sum2=sum2*i;
	}
	for(i=n2;i>=1;i--){
		sum3=sum3*i;
	}
	printf("The C(%lld,%lld) is %lld\n",n1,n2,sum1/(sum2*sum3));
}
void H_WTF(int n1, int n2){
	long long int sum1=1,i,sum2=1,sum3=1;
	for(i=n1+n2-1;i>=1;i--){
		sum1=sum1*i;
	}
	for(i=(n1+n2-1)-n2;i>=1;i--){
		sum2=sum2*i;
	}
	for(i=n2;i>=1;i--){
		sum3=sum3*i;
	}
	printf("The H(%lld,%lld) is %lld\n",n1,n2,sum1/(sum2*sum3));
}
int main(){
	long long int a,b;
	scanf("%lld%lld",&a,&b);
	while(a!=0||b!=0){
		if((a<0||a>20)||(b<0||b>20)||(a+b>20))
		{
			printf("Invalid input. Please enter again\n");
		}
		permutation(a,b);
		combination(a,b);
		H_WTF(a,b);
		scanf("%lld%lld",&a,&b);
	}
}
