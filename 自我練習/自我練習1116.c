//各種題型綜合練習 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
int main(){
	srand(time(NULL));
	//生成矩陣 
	int arr1[SIZE],i,j,k,count=0,temp,min,N,M;
	printf("Please enter the value of N and M (1<N,M<10)");
	scanf("%d%d",&N,&M);
	while(N!=0||M!=0){
		if((N<=1||N>=10)||(M<=1||M>=10))
		{
			printf("Invalid input:N and M must be between 2 and 9");
		}
		else
		{
			int arr2[N][M],arr3[M][N],arr4[N][N];
			printf("The original matrix:\n");
			for(i=0;i<N;i++){
				for(j=0;j<M;j++){
					arr2[i][j]=rand()%100+1;
					printf("%4d",arr2[i][j]);
				}
				printf("\n");
			}
			printf("The reverse matrix:\n");
			for(j=0;j<M;j++){
				for(i=0;i<N;i++){
					arr3[j][i]=arr2[i][j];
					printf("%4d",arr3[j][i]);
				}
				printf("\n");
			}
			//做矩陣乘法
			printf("The multiply:\n");
			for(i=0;i<N;i++){
				for(j=0;j<N;j++){
					arr4[i][j]=0;
					for(k=0;k<M;k++){
						arr4[i][j]=arr4[i][j]+arr2[i][k]*arr3[k][j];
					}
					printf("%6d",arr4[i][j]);
				}
				printf("\n");
			} 
		}
		printf("Please enter the value of N and M (1<N,M<10)");
		scanf("%d%d",&N,&M);
	}
	if(N==0&&M==0)
	{
		printf("Finish!\n\n");
	}
	printf("The oroginal array:\n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		arr1[i]=rand()%100+1;
		printf("%4d",arr1[i]);
		count++;
	}
	printf("\n\n");
	printf("The sorted array:\n");
	
	//泡沫排序法 
	
	/*for(k=0;k<SIZE-1;k++){
		for(j=0;j<SIZE-k-1;j++){
			if(arr1[j]>arr1[j+1])
			{
				temp=arr1[j+1];
				arr1[j+1]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",arr1[i]);
		count++;
	}
	printf("\n\n");*/
	
	//插入排序法
	/*for(k=1;k<SIZE-1;k++){
		temp=arr1[k];
		for(j=k-1;j>=0;j--){
			if(arr1[j]>temp)
			{
				arr1[j+1]=arr1[j];
			}
			else
				break;
		}
		arr1[j+1]=temp;
	}
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",arr1[i]);
		count++;
	}*/
	
	//選擇排序法
	for(k=0;k<SIZE-1;k++){
		min=k;
		for(j=k+1;j<SIZE;j++){
			if(arr1[j]<arr1[min])
			{
				min=j;
			}
		}
		if(k!=min)
		{
			temp=arr1[min];
			arr1[min]=arr1[k];
			arr1[k]=temp;
		}
	} 
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}
		printf("%4d",arr1[i]);
		count++;
	}
	printf("\n\n");
	
	//二分搜尋法
	int search,high,low,mid,find;
	printf("Please enter the value:");
	scanf("%d",&search);
	while(search!=EOF){
		find=-1;
		high=SIZE-1,low=0;
		mid=(high+low)/2;
		while(low<=high){
			mid=(high+low)/2;
			if(arr1[mid]==search)
			{
				find=1;
				printf("find the value in position %d\n",mid);
				break;
			}
			else if(arr1[mid]>search)
			{
				high=mid-1;
			}
			else if(arr1[mid]<search)
			{
				low=mid+1;
			}
		} 
		if(find==-1)
		{
			printf("Not find the value\n");
		}
		printf("Please enter the value:");
		scanf("%d",&search);
	}
	if(search==EOF)
	{
		printf("Finish!");
	}
	
}
