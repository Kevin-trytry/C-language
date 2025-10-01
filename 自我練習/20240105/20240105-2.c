#include<stdio.h>


int main(){
	long long a,b,i,count1,count2;
	printf("Please enter two numbers(a,b , b-a<=1000, b>a):");
	scanf("%d%d",&a,&b);
	while((a!=0)&&(b!=0)){
		count2=0;
		if(b-a>1000||a>b){
			printf("Wrong input, b-a should be less than 1000 and b>a\n\n");
		}
		else {
			for(a;a<=b;a++){
				count1=0;
				for(i=2;i<=a;i++){
					if(a%i==0)
						count1++;
				}
				if(count1==1)
					count2++;
			}
			printf("%d\n",count2);
		}
		printf("Please enter two numbers(a,b , b-a<=1000):");
		scanf("%d%d",&a,&b);
	}
}
