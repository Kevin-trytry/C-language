#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
//bubblesort
void bubblesort(int *a,const int);
int main(){
	srand(time(NULL));
	int arr1[size],i;
	printf("The original array:\n");
	for(i=0;i<size;i++){
		arr1[i]=rand()%101;
		printf("%d ",arr1[i]);
	}
	printf("\nAfter bubble sorting(from the largest to the smallest):\n");
	bubblesort(arr1,size);
	return 0;
} 
void bubblesort(int *arr2,const int len){
	int temp,j,k,i;
	for(k=0;k<len-1;k++){
		for(j=0;j<len-1-k;j++){
			if(arr2[j]<arr2[j+1]){
				temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d ",arr2[i]);
	}
}


