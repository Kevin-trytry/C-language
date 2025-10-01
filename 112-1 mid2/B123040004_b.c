#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int N,i,j;
	char x=' ';
	while(1){
		printf("Please input a layer number :");
		scanf("%d",&N);
		if(N<1||N>15)
		{
			printf("Wrong input, input again!\n\n");
		}
		else 
		{
			for(i=1;i<=N;i++){
				for(j=0;j<N-i;j++){
					printf("%5c",x);
				}
				printf("%5d\n",1);
			}
		}
	}
}
