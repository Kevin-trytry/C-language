#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
	int arr[1024],i=0,j,count=0,max=0,k,len,temp;
	printf("Input Array:");
	while(scanf("%d",&arr[i])!=EOF){
		i++;
	}
	for(k=0;k<i-1;k++){
		for(j=2;j<=arr[k];j++){
			if(arr[k]%j==0)
				count++;
		}
		for(j=k;j<i;j++){
			max=k;
			if(count==1&&arr[j]>arr[max])
			{
				temp=arr[max];
				arr[max]=arr[j];
				arr[j]=temp;
			}
		}
		count*=0;
	}
	for(j=0;j<i;j++){
		printf("%d ",arr[j]);
	}
	
} 
