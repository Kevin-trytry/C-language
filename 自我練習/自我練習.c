#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define SIZE 50
int main(){
	srand(time(NULL));
	int arr[SIZE],i,count=0;
	//�ͦ��H���üƪ��}�C 
	for(i=0;i<SIZE;i++){
		arr[i]=rand()%50+1;
	} 
	printf("�Ƨǫe:  \n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}	
		printf("%3d",arr[i]);
		count++;
	}
	count*=0;
	printf("\n");
	
	//��w�ƧǪk 
	/*int k,j,temp1;
	for(k=0;k<SIZE-1;k++){
		for(j=0;j<SIZE-1-k;j++){
			if(arr[j]<arr[j+1])
			{
				temp1=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp1;
			}
		}
	}
	printf("�Ƨǫ�:   \n");
	for(i=0;i<SIZE;i++){
		printf("%d ", arr[i]);
	}*/
	 
	//���J�ƧǪk
	/*int k,j,temp2;
	for(k=1;k<SIZE;k++){
		temp2=arr[k];
		for(j=k-1;j>=0;j--){
			if(arr[j]<temp2)
				arr[j+1]=arr[j];
			else
				break;
		}
		arr[j+1]=temp2;
	}
	printf("�Ƨǫ�:   \n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}	
		printf("%3d",arr[i]);
		count++;
	}*/
	
	//��ܱƧǪk
	/*int k,j,min,temp3;
	for(k=0;k<SIZE-1;k++){
		min=k;
		for(j=k+1;j<SIZE-1;j++){
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=k){
			temp3=arr[min];
			arr[min]=arr[k];
			arr[k]=temp3;
		}
	}		
	printf("�Ƨǫ�:   \n");
	for(i=0;i<SIZE;i++){
		if(count==10)
		{
			printf("\n");
			count*=0;
		}	
		printf("%3d",arr[i]);
		count++;
	}*/
}
