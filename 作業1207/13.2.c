#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//13.2
void getNumber(FILE **file,int arr[]){
	srand(time(NULL));
	int i,j;
	for(i=0;i<1000;i++){
		arr[i]=rand()%9001+1000;
		if(i>0){
			for(j=0;j<i;j++){
				if(arr[j]==arr[i]){
					i--;
					break;
				}
				else{
					continue;
				}
			}
		}
	}
	for(i=0;i<1000;i++){
		fprintf(*file,"%d\n",arr[i]);
	}
}

void swap(int *a,int *b);
void bubbleSortRecursive(int arr[],int length){
	int i,j;
	i=length;
	if(i>0){
		for(j=0;j<length-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
		bubbleSortRecursive(arr,length-1);
	}
	else
		return;
} 

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int binarySearchRecursive (int arr[],int search,int left ,int right) {
	if(left>right)
		return -1;
	if(arr[(left+right)/2]==search){
		return (left+right)/2;
	}
   	else if(arr[(left+right)/2]>search){
   		right=(left+right)/2+1;
   		binarySearchRecursive(arr,search,left,right);
	}
	else if(arr[(left+right)/2]<search){
   		left=(left+right)/2+1;
   		binarySearchRecursive(arr,search,left,right);
	}
}

int main(){
	//generate array
	FILE *file=fopen("test.txt","w");
	int arr[1000],i;
	int length=sizeof(arr)/sizeof(arr[0]);
	getNumber(&file,arr);
	fclose(file);
	
	//BubbleSortRecursive
	FILE *file2=fopen("sorted.txt","w");
	bubbleSortRecursive(arr,length);
	for(i=0;i<length;i++){
		printf("%d\n",arr[i]);
		fprintf(file2,"%d\n",arr[i]);
	}
	fclose(file2);
	
	//binarysearch
	int search,find,left,right;
	right=length-1,left=0;
	printf("Enter a number to search:");
	scanf("%d",&search);
	find=binarySearchRecursive(arr,search,left,right);
	if(find==-1){
		printf("Element not present in the array");
	}
	else{
		printf("Element is found at index %d",find);
	}
}



