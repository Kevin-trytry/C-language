#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
int main(){
	srand(time(NULL));
	int a[SIZE],i,count=0;
	//生成初始陣列 
	printf("The original array:\n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		a[i]=rand()%100+1;
		printf("%4d",a[i]);
		count++;
	}
	count*=0;
	printf("\n\n");
	//氣泡排序法
	/*int k,j,temp;
	for(k=0;k<SIZE-1;k++){
		for(j=0;j<SIZE-k-1;j++){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	} 
	printf("The ordered array:\n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%3d",a[i]);
		count++;
	}*/
	
	//插入排序法
	int k,j,temp;
	for(k=1;k<SIZE;k++){
		temp=a[k];
		for(j=k-1;j>=0;j--){
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
				break;
		}
		a[j+1]=temp;
	} 
	printf("The ordered array:\n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",a[i]);
		count++;
	}
	
	//選擇排序法 
	/*int k,j,min,temp;
	for(k=0;k<SIZE;k++){
		min=k;
		for(j=k+1;j<SIZE;j++){
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=k)
		{
			temp=a[k];
			a[k]=a[min];
			a[min]=temp;
		}
	}
	printf("The ordered array:\n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",a[i]);
		count++;
	}*/
	
	//二分搜尋法
	int high,low,search,mid,find;
	find=-1;
	low=0,high=SIZE-1;
	printf("\n\nPlease enter the value:");
	scanf("%d",&search);
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==search)
		{
			printf("find %d in %d",search,mid+1);
			find=1;
			break;
		}
		else if(search>a[mid])
		{
			low=mid+1;
		}
		else if(search<a[mid])
		{
			high=mid-1;
		}
	} 
	if(find==-1)
	{
		printf("Not find the value %d",search);
	}
} 
