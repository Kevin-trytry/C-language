#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	
	//9.1 
	int arr1[3][3],arr2[3][3],arr3[3][3],i,j,k;
	printf("a.\n");
	//生成a矩陣 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr1[i][j]=rand()%101;
			printf("[%d][%d] = %-3d",i,j,arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("b.\n");
	//生成b矩陣
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr2[i][j]=rand()%101;
			printf("[%d][%d] = %-3d",i,j,arr2[i][j]);
		}
		printf("\n");
	}
	
	printf("add.\n");
	//做加法
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf("[%d][%d] = %-4d",i,j,arr3[i][j]);
		}
		printf("\n");
	}
	 
	printf("sub.\n");
	//做減法
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr3[i][j]=arr1[i][j]-arr2[i][j];
			printf("[%d][%d] = %-4d",i,j,arr3[i][j]);
		}
		printf("\n");
	} 
	
		printf("multi.\n");
	//做乘法
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr3[i][j]=0;
			for(k=0;k<3;k++){
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
			}
			printf("[%d][%d] = %-6d",i,j,arr3[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	
	//9.2
	int length1,length2,length3,min;
	//確認陣列長度 
	printf("First array length:\n");
	scanf("%d",&length1);
	printf("Second array length:\n");
	scanf("%d",&length2);
	int a1[length1],a2[length2];
	length3=length1+length2;
	int a3[length3];
	//生成第一個陣列 
	printf("First array:[");
	for(i=0;i<length1;i++){
		a1[i]=rand()%21;
		printf("%d ",a1[i]);
	}
	printf("]");
	printf("\n");
	//泡沫排序法
	int temp;
	for(k=0;k<length1-1;k++){
		for(j=0;j<length1-k-1;j++){
			if(a1[j]>a1[j+1])
			{
				temp=a1[j];
				a1[j]=a1[j+1];
				a1[j+1]=temp;
			}
		}
	}
	printf("After bubble sort:[");
	for(i=0;i<length1;i++){
		printf("%d ",a1[i]);
	}
	printf("]");
	
	printf("\n");
	//生成第二個陣列
	printf("Second array:[");
	for(i=0;i<length2;i++){
		a2[i]=rand()%21;
		printf("%d ",a2[i]);
	}
	printf("]");
	printf("\n");
	//插入排序法
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
	printf("After Insertion sort:[");
	for(i=0;i<length2;i++){
		printf("%d ",a2[i]);
	}
	printf("]");
	printf("\n");
	
	//將兩個陣列合成
	for(i=0;i<length1;i++){
		a3[i]=a1[i];
	} 
	for(i=0+length1;i<length2+length1;i++){
		a3[i]=a2[i-length1];
	}
	//將新陣列進行排序(選擇排序法)
	for(k=0;k<length3;k++){
		min=k;
		for(j=k+1;j<length3;j++){
			if(a3[min]>a3[j])
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
	printf("]");
}
 
	

