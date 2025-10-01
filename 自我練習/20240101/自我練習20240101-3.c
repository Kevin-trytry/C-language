#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//my way
void generatearray(int n);
void insertionsort(int *arr,int len);
int main(){
	int length;
	printf("Please enter the length of an array:");
	while(scanf("%d",&length)!=EOF){
		generatearray(length);
		printf("Please enter the length of an array:");
	}
	if(length=EOF){
		printf("Finish!");
	}
} 

void generatearray(length){
	srand(time(NULL));
	int i,arr[length];
	printf("The original array:");
	for(i=0;i<length;i++){
		arr[i]=rand()%1000+1;
		printf("%d ",arr[i]);
	}
	printf("\n");
	insertionsort(arr,length);
}

void insertionsort(int *arr,int len){
	int i,j,k,temp;
	for(k=1;k<len;k++){
		temp=arr[k];
		for(j=k-1;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else
				break;
		}
		arr[j+1]=temp;
	}
	printf("After insertion sorting:");
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

//recursion solution
//C language
 
#include<stdio.h>
#include<stdlib.h>  //qsort()
int cmp(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        int i,a[1005];
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        qsort(a,N,sizeof(a[0]),cmp);
        for(i=0;i<N;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
