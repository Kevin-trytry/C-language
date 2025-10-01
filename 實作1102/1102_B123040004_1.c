#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(NULL));
	int num[10],sum=0,i,random;
	printf("Array Item:\n");
	for(i=0;i<10;i++){
		random=rand()%100+1;
		num[i]=random;
		printf("No.%d is %d",i+1,num[i]);
		sum+=num[i];
		printf("\n");
	}
	printf("Sum:  %d\n",sum);
	printf("Average:  %.2f",sum/10.0);
}
