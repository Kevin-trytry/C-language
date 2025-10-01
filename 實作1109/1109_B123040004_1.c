#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 15
int main(){
	srand(time(NULL));
	int arr[SIZE];
	int i;
	printf("Original Array:\n");
	for(i=0;i<15;i++){
		arr[i]=rand()%101+1;
		printf("%d ",arr[i]);
	}
	printf("\n\n\n");
	//選擇排序法:遞增 
	int k,j,temp,min,max;
	for(k=0;k<SIZE-1;k++){ 
		min=k;
		for(j=k+1;j<SIZE;j++){
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=k){
			temp=arr[min];
			arr[min]=arr[k];
			arr[k]=temp;
		}
	} 
	printf("Selection Sort(Ascending):\n");
	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	//選擇排序法:遞減 
	for(k=0;k<SIZE-1;k++){ 
		max=k;
		for(j=k+1;j<SIZE;j++){
			if(arr[j]>arr[max])
			{
				max=j;
			}
		}
		if(max!=k){
			temp=arr[max];
			arr[max]=arr[k];
			arr[k]=temp;
		}
	} 
	printf("\nSelection Sort(Descending):\n");
		for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n\n");
	//插入排序法:遞增 
	for(k=1;k<SIZE;k++){
		temp=arr[k];
		for(j=k-1;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else
				break;
		}
		arr[j+1]=temp;
	}
	printf("Insertion Sort(Ascending):\n");
	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	//插入排序法:遞減
	for(k=1;k<SIZE;k++){
		temp=arr[k];
		for(j=k-1;j>=0;j--){
			if(arr[j]<temp){
				arr[j+1]=arr[j];
			}
			else
				break;
		}
		arr[j+1]=temp;
	}
	printf("\nInsertion Sort(Descending):\n");
	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n\n");
	//泡沫排序法:遞增
	for(k=0;k<SIZE;k++){
		for(j=0;j<SIZE-1-k;j++){
			if(arr[j+1]<arr[j])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	printf("\nInsertion Sort(Ascending):\n");
	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	//泡沫排序法:遞減 
	for(k=0;k<SIZE;k++){
		for(j=0;j<SIZE-1-k;j++){
			if(arr[j+1]>arr[j])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	printf("\nInsertion Sort(Ascending):\n");
	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	

}

 
