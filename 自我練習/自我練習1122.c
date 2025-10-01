#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	//課堂實作五 
	char strarr[100][1024];
	int i=0,j,length,left,right,mid,count;
	while(fgets(strarr[i], 1024, stdin)!=NULL){
		i++;
	}
	for(j=0;j<i;j++){
		length=strlen(strarr[j])-1;
		left=0;right=length-1,count=0;
		mid=right/2;
		for(left=0;left<=mid;left++){
			if(strarr[j][left]==strarr[j][right])
			{
				count++;
			}
			else
			{
				break;
			}
			right-=1;
		}
		if(count==mid+1)
		{
			printf("%s",strarr[j]);
		}
	}
	printf("\n\n\n");
	
	//課堂實作六
	int k=0;
	char strarr2[100][1024];
	i=0,count=0;
	while(fgets(strarr2[i], 1024, stdin)!=NULL){
		i++;
	}
	for(j=0;j<i;j++){
		for(k=0;k<i;k++){
			if(strlen(strarr2[j])>=strlen(strarr2[k]))
			{
				count++;
			}
		}
		if(count==i)
		{
			printf("%s",strarr2[j]);	
		}
		count*=0;
	}
	printf("\n\n\n");
	
	//生成隨機陣列，範圍從-99~99 
	srand(time(NULL));
	int len;
	count=0;
	while(1){
		printf("Please enter the length of the array:");
		scanf("%d",&len);
		int arr[len];
		printf("The original array:\n");
		printf("[");
		for(i=0;i<len;i++){
			if(count==10)
			{
				printf("\n");
				count*=0;
			}
			arr[i]=99-rand()%199;
			printf("%4d",arr[i]);
			count++;
		}
		printf("]");
		printf("\n");
		
		int a;
		printf("Please choose the way to sort:\n");
		printf("1.Bubble Sort\n2.Insertionsort\n3.Selecting Sort\n");
		scanf("%d",&a);
		printf("\n\n");
		//泡沫排序法
		if(a==1)
		{
			int temp;
			for(k=0;k<len-1;k++) {
				for(j=0;j<len-k-1;j++){
					if(arr[j]>arr[j+1])
					{
						temp=arr[j+1];
						arr[j+1]=arr[j];
						arr[j]=temp;
					}
				}
			}
			printf("After sorted:\n");
			count=0;
			printf("[");
			for(i=0;i<len;i++){
				if(count==10)
				{
					printf("\n");
					count*=0;
				}
				printf("%4d",arr[i]);
				count++;
			}
			printf("]");
		}
		//插入排序法
		else if(a==2)
		{
			int temp;
			for(k=1;k<len;k++){
				temp=arr[k];
				for(j=k-1;j>=0;j--){
					if(arr[j]>temp)
					{
						arr[j+1]=arr[j];
					}
					else
					{
						break;
					}
				}
				arr[j+1]=temp;
			} 
			printf("After sorted:\n");
			printf("[");
			count=0;
			for(i=0;i<len;i++){
				if(count==10)
				{
					printf("\n");
					count*=0;
				}
				printf("%4d",arr[i]);
				count++;
			}
			printf("]");
		}
		
		//選擇排序法 
		else if(a==3)
		{
			int temp,min;
			for(k=0;k<len;k++){
				min=k;
				for(j=k+1;j<len;j++){
					if(arr[j]<arr[min])
						min=j;
				}
				if(min!=k)
				{
					temp=arr[min];
					arr[min]=arr[k];
					arr[k]=temp;
				}
			}
			printf("After sorted:\n");
			count=0;
			printf("[");
			for(i=0;i<len;i++){
				if(count==10)
				{
					printf("\n");
					count*=0;
				}
				printf("%4d",arr[i]);
				count++;
			}
			printf("]");
		}
		
		printf("\n\n");
		//Binary Search
		int high,low,mid2,search,find;
		printf("Please enter the value to search:");
		scanf("%d",&search);
		while(search!=100){
			find=-1;
			low=0;high=len-1;
			while(low<=high){
				mid=(high+low)/2;
				if(arr[mid]==search)
				{
					find=1;
					printf("Find %d in the position %d\n\n",search,mid+1);
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
				printf("Not find the value.\n\n");
			}
			printf("Please enter the value to search:");
			scanf("%d",&search);
		}
		
		if(search==100)
		{
			printf("Return to the begining\n\n");
		}
	}	
}

