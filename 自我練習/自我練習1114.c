#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 11
int main(){
	srand(time(NULL));
	int arr[SIZE],i,j,k;
	//生成元素不同的陣列 
	printf("Original Random Array:");
	for(i=0;i<SIZE;i++){
		do{
			arr[i]=rand()%100+1;
			for(j=0;j<i;j++){
				if(arr[i]==arr[j])
				{
					break;
				}
			}
		}
		while(j!=i);
		printf("%d ",arr[i]);
	} 
	printf("\n");
	//進行排序法
	printf("Sorted Array:");
	int temp;
	for(k=0;k<SIZE-1;k++){
		for(j=0;j<SIZE-k-1;j++){
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	for(i=0;i<SIZE;i++){
		printf("%d ", arr[i]); 
	}
}
