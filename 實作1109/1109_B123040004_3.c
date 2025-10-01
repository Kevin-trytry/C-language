#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 11
int main(){
	srand(time(NULL));
	int a[SIZE];
	int i,j,k,min,temp;
	printf("Binary search:\n\n\n");
	//生成元素不重複的陣列 
	for(i=0;i<SIZE;i++){
		a[i]=rand()%101+1;
	}
	

	printf("Original Array:");
	for(i=0;i<SIZE;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Sorted Array:");
	for(k=0;k<SIZE;k++){
		min=k;
		for(j=k+1;j<SIZE;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}	
		if(min!=k){
			temp=a[min];
			a[min]=a[k];
			a[k]=temp;
		}
	}
	for(i=0;i<SIZE;i++){
		printf("%d ",a[i]);
	}
} 
