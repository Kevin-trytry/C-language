#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 50
int main(){
	//生成初始陣列，個個元素介於-50~50之間 
	srand(time(NULL));
	int arr[SIZE],i,j,count=0;
	printf("The original array:\n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		arr[i]=50-rand()%100;
		printf("%4d",arr[i]);
		count++;
	} 
	count*=0;
	printf("\n\n");
	//利用泡沫排序法
	int k,temp;
	for(k=0;k<SIZE-1;k++){
		for(j=0;j<SIZE-1-k;j++){
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	printf("The sorted array:\n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",arr[i]);
		count++;
	} 
	printf("\n\n");
	//利用二元搜尋法
	int low,high,mid,find,search;
	printf("Please enter a value:");
	scanf("%d",&search);
	while(search!=-1){
		low=0,high=SIZE-1,find=-1;
		while(low<=high){
			mid=(high+low);
			if(arr[mid]==search)
			{
				find=1;
				printf("Find %d in position %d\n",search,mid);
				break;
			}
			else if(arr[mid]>search)
			{
				high=mid-1;
			}
			else if(arr[mid]<search)
			{
				low=mid+1;
			}
		}
		if(find==-1)
		{
			printf("Not find the value in the array\n");
		}
		printf("Please enter a value:\n");
		scanf("%d",&search);
	}
	if(search==-1)
	{
		printf("Finish!");
	}
} 
