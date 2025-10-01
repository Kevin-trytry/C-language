#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sortnumbers(int *a, int *b, int *c, int *d, int *e){
	int arr[5],i,k,temp;
	arr[0]=*a;
	arr[1]=*b;
	arr[2]=*c;
	arr[3]=*d;
	arr[4]=*e;
	printf("Sorted: ");
	for(k=1;k<5;k++){
		temp=arr[k];
		for(i=k-1;i>=0;i--){
			if(arr[i]>temp)
			{
				arr[i+1]=arr[i];
			}
			else
				break;
		}
		arr[i+1]=temp;
	}
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	srand(time(NULL));
	int num1,num2,num3,num4,num5;
	num1=rand()%20+1;
	num2=rand()%20+1;
	num3=rand()%20+1;
	num4=rand()%20+1;
	num5=rand()%20+1;
	printf("Random 5 numbers: %d %d %d %d %d\n",num1,num2,num3,num4,num5);
	sortnumbers(&num1,&num2,&num3,&num4,&num5);
}
