#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int mymean(int b[], int len);

int main(){
	srand(time(NULL));
	int arr[5],i,len=5;
	//generate the array
	printf("Generated array: ");
	for(i=0;i<5;i++){
		do{
			arr[i]=rand()%101;
		}while(arr[i]%10!=0);
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	mymean(arr, len);
}

int mymean(int b[], int len){
	int i;
	float sum=0.0,mean;
	for(i=0;i<len;i++){
		sum+=b[i];
	}
	mean=sum/=len;
	printf("Mean:");
	printf("%f\n\n",mean);
	printf("The address of Mean is: %p",&mean);
}
