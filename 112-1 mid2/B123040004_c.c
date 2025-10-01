#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	while(1){
		srand(time(NULL));
		int length,i,sort,j,k,search;
		printf("Please input the length:");
		scanf("%d",&length);
		if(length>25||length<1)
		{
			printf("Wrong input, input again!\n\n");
		}
		else
		{
			//生成初始陣列 
			int arr[length];
			printf("The original array:\n");
			for(i=0;i<length;i++){
				arr[i]=99-rand()%199;
				printf("%d ",arr[i]);
			}
			printf("\n\n");
			printf("Select sorting method\n1. insertion sort 2. Selection sort");
			scanf("%d",&sort);
			if(sort==1)
			{
				printf("After sorted:\n");
				//插入排序 
				int temp;
				for(k=1;k<length;k++){
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
				for(i=0;i<length;i++){
					printf("%d ",arr[i]);
				}
				printf("\n\n");
				//二分搜尋
				int high,low,mid,find;
				printf("Please input a number to search:"); 
				scanf("%d",&search);
				while(search!=100){
					find=-1;
					high=length-1,low=0;
					mid=(high+low)/2;
					while(low<=high){
						mid=(high+low)/2;
						if(arr[mid]==search)
						{
							find=1;
							printf("%d is NO.%d element in array\n\n",search,mid);
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
					if(find==-1)
					{
						printf("%d is not element in array\n\n",search);
					}
					printf("Please input a number to search:"); 
					scanf("%d",&search);
				}
				if(search==100)
				{
					printf("Return to the begining.\n\n");
					continue;
				}
			}
			if(sort==2)
			{
				printf("After sorted:\n");
				//選擇排序 
				int min,temp;
				for(k=0;k<length-1;k++){
					min=k;
					for(j=k+1;j<length;j++){
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
				for(i=0;i<length;i++){
					printf("%d ",arr[i]);
				}
				printf("\n\n");
				//二分搜尋
				int high,low,mid,find;
				printf("Please input a number to search:"); 
				scanf("%d",&search);
				while(search!=100){
					find=-1;
					high=length-1,low=0;
					mid=(high+low)/2;
					while(low<=high){
						mid=(high+low)/2;
						if(arr[mid]==search)
						{
							find=1;
							printf("%d is NO.%d element in array\n\n",search,mid+1);
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
					if(find==-1)
					{
						printf("%d is not element in array\n\n",search);
					}
					printf("Please input a number to search:"); 
					scanf("%d",&search);
				}
			}
			if(search==100)
				{
					printf("Return to the beginning.\n\n");
					continue;
				}
		}
	}
}
