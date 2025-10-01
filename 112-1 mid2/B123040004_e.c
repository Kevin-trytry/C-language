#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15
int main(){
	
	while(1){
		srand(time(NULL));
		int arr[SIZE],i,j,k;
		printf("Original array:\n");
		//生成初始陣列 
		for(i=0;i<SIZE;i++){
			arr[i]=10-rand()%20;
			printf("%d  ",arr[i]);
		}
		printf("\n");
		//選擇排序法
		int min,temp;
		for(k=0;k<SIZE-1;k++){
			min=k;
			for(j=k+1;j<SIZE;j++){
				if(arr[min]>arr[j])
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
		printf("\n");
		//印出所求
		printf("Result:\n");
		int high=SIZE-1,low=0,mid;
		mid=(high+low)/2;
		for(high;high>mid;high--){
			printf("%d %d ",arr[high],arr[low]);
			low+=1;
		}
		printf("%d",arr[mid]);
		printf("\n\n");
		//繼續執行
		int gogo;
		printf("Please enter 0 to continue:");
		scanf("%d",&gogo);
		if(gogo==0)
		{
			printf("\n");
			continue;
		 } 
	}
}
