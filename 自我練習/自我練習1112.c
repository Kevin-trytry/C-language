#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100 
//�m�ߤ��e:�}�C�ƧǻP�G���j�M�k 

int main(){
	//�ͦ�100�Ӥ������}�C
	printf("The original array:\n");
	srand(time(NULL));
	int arr[SIZE],i,count=0;
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		arr[i]=rand()%101;
		printf("%4d",arr[i]);
		count++;
	}
	printf("\n");
	printf("The amount of every element:%d\n",sizeof(arr[0]));
	printf("The amount of the whole array:%d\n",sizeof(arr));
	printf("The numbers of the elements in the array:%d",sizeof(arr)/sizeof(arr[0]));
	count*=0;
	printf("\n\n");
	printf("The ordered array:\n");
	//�Q�Ϊw�j�ƧǪk�Ƨ�
	/*
	int k,j,temp;
	for(k=0;k<SIZE;k++){
		for(j=0;j<SIZE-k-1;j++){
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	} 
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",arr[i]);
		count++;
	}*/
	
	//�Q�δ��J�ƧǪk�Ƨ�
	/*int k,j,temp;
	for(k=1;k<SIZE;k++){
		temp=arr[k];
		for(j=k-1;j>=0;j--){
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			else 
				break;
		}
		arr[j+1]=temp;
	} 
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",arr[i]);
		count++;
	}*/
	
	//�Q�ο�ܱƧǪk�Ƨ�
	int k,j,min,temp;
	for(k=0;k<SIZE;k++){
		min=k;
		for(j=k;j<SIZE;j++){
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=k)
		{
			temp=arr[min];
			arr[min]=arr[k];
			arr[k]=temp;
		}
	} 
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
	
	//�Q�ΤG���j�M�k�M��ϥΪ̪���J��
	int high,low,mid,search;
	int find=-1;
	low=0,high=SIZE-1;
	printf("Please enter the value:");
	scanf("%d",&search);
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==search)
		{
			printf("Find the value in %d",mid);
			find=1;
			break;
		}
		else if(arr[mid]<search)
		{
			low=mid+1;
		}
		else if(arr[mid]>search)
		{
			high=mid-1;
		}
	}
	if(find!=1)
	{
		printf("Not find");
	}
	
} 
