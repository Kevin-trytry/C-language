#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100 
int main(){
	//矩陣乘法練習 
	/*
	條件:
	1.生成亂數1~100的矩陣
	2.行列隨使用者定義
	3.兩個矩陣生成後做乘法 
	*/
	srand(time(NULL));
	int N,M,i,j,k;
	printf("Please enter the value of N and M(1<N,M<10):");
	scanf("%d%d",&N,&M);
	while(N!=0 || M!=0){
		//除錯 
		if((N<=1||N>=10)||(M<=1||M>=10))
		{
			printf("Invalid Input:N and M must be berween 2 and 9\n");
		}
		else 
		{
			int arr1[N][M],arr2[M][N],arr3[N][N];
			printf("The original matrix:\n");
			//生成初始陣列 
			for(i=0;i<N;i++){
				for(j=0;j<M;j++){
					arr1[i][j]=rand()%100+1; 
					printf("%4d",arr1[i][j]);
				}
				printf("\n");
			}	
			//反轉陣列 
			printf("The reverse matrix:\n");
			for(j=0;j<M;j++){
				for(i=0;i<N;i++){
					arr2[j][i]=arr1[i][j]; 
					printf("%4d",arr2[j][i]);
				}
				printf("\n");
			} 
			//矩陣乘法
			printf("The muituply of the two matrixes:\n");
			for(i=0;i<N;i++){
				for(j=0;j<N;j++){
					arr3[i][j]=0;
					for(k=0;k<M;k++){
						arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
					}
					printf("%6d",arr3[i][j]);
				}
				printf("\n");
			} 
		}
		printf("Please enter the value of N and M(1<N,M<10):");
		scanf("%d%d",&N,&M);
	}
	if(N==0&&M==0)
	{
		printf("Finish!");
	}
	printf("\n\n\n");
	
	
	
	//各種排序法練習
	/*
	條件:
	1.生成2個陣列並用不同排序法排序
	2.結合兩個陣列並將新陣列排序
	3.元素界在1~100間 
	*/
	int length1,length2,length3; 
	printf("Please enter the langth of the first array:");
	scanf("%d",&length1);
	printf("Please enter the langth of the Second array:");
	scanf("%d",&length2);
	int a1[length1],a2[length2];
	length3=length1+length2;
	int a3[length3];
	//生成第一個陣列 
	printf("The first array:[");
	for(i=0;i<length1;i++){
		a1[i]=rand()%101;
		printf("%d ",a1[i]);
	}
	printf("]\n");
	//將第一個陣列以泡沫排序法排序
	int temp;
	for(k=0;k<length1-1;k++){
		for(j=0;j<length1-k-1;j++){
			if(a1[j]>a1[j+1])
			{
				temp=a1[j+1];
				a1[j+1]=a1[j];
				a1[j]=temp;
			}
		}
	}
	printf("After bubble sort:[");
	for(i=0;i<length1;i++){
		printf("%d ",a1[i]);
	}
	printf("]\n");
	//生成第二個陣列
	printf("The second array:[");
	for(i=0;i<length2;i++){
		a2[i]=rand()%101;
		printf("%d ",a2[i]);
	}
	printf("]\n");
	//將第二個陣列以插入排序法排序
	for(k=1;k<length2;k++){
		temp=a2[k];
		for(j=k-1;j>=0;j--){
			if(a2[j]>temp)
			{
				a2[j+1]=a2[j];
			}
			else	
				break;
		}
		a2[j+1]=temp;
	} 
	printf("After insertion sort:[");
	for(i=0;i<length2;i++){
		printf("%d ",a2[i]);
	}
	printf("]\n");
	//將兩個陣列合成並排序(選擇排序法)
	for(i=0;i<length1;i++){
		a3[i]=a1[i];
	}
	for(i=length1;i<length3;i++){
		a3[i]=a2[i-length1];
	}
	//選擇排序法
	int min; 
	for(k=0;k<length3-1;k++){
		min=k;
		for(j=k+1;j<length3;j++){
			if(a3[j]<a3[min])
			{
				min=j;
			}
		}
		if(min!=k)
		{
			temp=a3[min];
			a3[min]=a3[k];
			a3[k]=temp;
		}
	}
	printf("After merging and sorting:[");
	for(i=0;i<length3;i++){
		printf("%d ",a3[i]);
	}
	printf("]\n");
	printf("\n\n");
	
	//二分搜尋法
	int high,low,mid,search,find;
	printf("Please enter the value:");
	scanf("%d",&search);
	while(search!=-1){
		find=-1;
		low=0,high=length3-1;
		mid=(high+low)/2;
		while(low<=high){
			mid=(high+low)/2;
			if(a3[mid]==search)
			{
				find=1;
				printf("Find the value in the position %d\n",mid);
				break;
			}
			else if(a3[mid]>search)
			{
				high=mid-1;
			}
				else if(a3[mid]<search)
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
	if(search==-1)
	{
		printf("Finish!");
	}
} 
