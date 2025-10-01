#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(NULL));
	int coefficient[10],i,random,index;
	printf("Original polynominal:");
	
	for(i=9;i>=0;i--){
		random=rand()%10;
		coefficient[i]=random;
	}
	for(i=9;i>=0;i--){
		
		if(coefficient[i]==0){
			printf("");
		}
	
		else
			{
				printf("%d * x^%d",coefficient[i],i);
				if(i==0){
					break;}
				if(coefficient[i-1]!=0 || coefficient[i-2]!=0)
					printf(" + ");
			}
		
		}
		
	
	
	printf("\nDifferentiated polynomial:");
	for(i=9;i>=0;i--){
		
		if(coefficient[i]==0)
			{printf("");
			}
		else{
		
			if(i-1>=0){
					printf("%d * x^%d",coefficient[i]*i,i-1);
			if(coefficient[i-1]!=0 || coefficient[i-2]!=0)
					printf(" + ");
			}
			
		}
	}
}
