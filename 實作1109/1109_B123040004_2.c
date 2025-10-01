#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
int main(){
	srand(time(NULL));
	int arr[SIZE];
	int i,search,count=0;
	printf("Original array:");
	for(i=0;i<SIZE;i++){
		arr[i]=rand()%16+1;
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Search Number:");
	scanf("%d",&search);
	printf("Positions where %d appears in the array:\n",search);
	for(i=0;i<SIZE;i++){
		if(search==arr[i]){
			count++;
			printf("%d ",i);
		}
		
	}
	if(count==0){
		printf("Not found in the array");
	}
} 
