#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(NULL));
	int num[10],i,random,max,min,temp1=0,temp2=0;
	printf("Array contents: ");
	for(i=0;i<10;i++){
		random=rand()%100+1;
		num[i]=random;
		printf("%d ",num[i]);
	}
	min=max=num[0];
	for(i=0;i<9;i++){
		if(num[i+1]>num[i]){
			max=num[i+1];
			temp1=i+1;}
		else 
			max=max;
			temp1=temp1;
	
	}
	
	for(i=0;i<9;i++){
		if(num[i+1]<num[i]){
			min=num[i+1];
			temp2=i+1; 
		}
		else
			min=min;
			temp2=temp2;
	}
	printf("\n");
	printf("Minimum value is %d at position %d\n",min,temp2);
	printf("Maximum value is %d at position %d\n",max,temp1);
}
