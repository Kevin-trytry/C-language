#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int arr[2][3]={0},i,j;
	printf("Please enter the elements of the 2x3 matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the element at row %d, colume %d:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Original matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%-5d",arr[i][j]);
		}
		printf("\n");
	}
	printf("Transposed matrix:\n");
	for(j=0;j<3;j++){
		for(i=0;i<2;i++){
			printf("%-5d",arr[i][j]);
		}
		printf("\n");
	}
}
