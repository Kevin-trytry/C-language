#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define SIZE 10
int main(){
	//10.1
	printf("10.1\n");
	srand(time(NULL));
	int arr[SIZE],i,j,k,temp=1,max=0;
	//生成初始陣列 
	printf("[");
	for(i=0;i<SIZE;i++){
		arr[i]=5-rand()%11;
		printf("%d ",arr[i]);
	}
	printf("]\n");
	
	//找最大陣列
	int high,indexmin=0,indexmax;
	for(i=1;i<=SIZE;i++){
		for(j=0;j<=SIZE-1;j++){
			high=i;
			for(k=j;k<high;k++){
				if(high>10)
				{
					break;
				}
				temp*=arr[k];
				high+=1;
			}
			if(temp>max)
			{
				max=temp;
				indexmin=j+1;
				indexmax=k-1+1;
			}
			temp=1;
		}
	}
	printf("Maximum Product Subarray is from position %d to %d with product %d\n",indexmin,indexmax,max);
	printf("The subaray is:[");
	for(i=indexmin-1;i<indexmax;i++){
		printf("%d ",arr[i]);
	}
	printf("]");
	
	printf("\n\n\n");
	//10.2
	printf("10.2\n");
	char str[100];
	int len,left,right,count1=0,count2=0,count3=0,temp2;
	printf("Input a string: ");
	fgets(str, 100, stdin);
	len=strlen(str)-1;
	for(k=2;k<=len;k+=2){ //決定substring長度 
		right=k;
		for(left=0;left<len;left++){ //決定左界 
			if(right>len) //除錯右界 
				break;
			for(j=left;j<right;j++){ //判斷L和R的個數 
				if(str[j]=='L')
					count1++;
				else if(str[j]=='R')
					count2++;
				}
			if(count1==count2){ //印出balanced string 
				temp2=left;
				for(temp2;temp2<right;temp2++){
					printf("%c",str[temp2]);
				}
				printf("\n");
				count3++;
			}
			count1*=0,count2*=0;
			right+=1;
		}
	}
	printf("Maximum number of balanced substrings:%d",count3);
	return 0;
}
