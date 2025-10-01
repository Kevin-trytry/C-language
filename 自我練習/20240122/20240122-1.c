#include<stdio.h>
int main(){
	int row,column;
	while(scanf("%d %d",&row,&column)!=EOF){
		int i,j,input;
		int arr[row][column];
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				scanf("%d",&input);
				arr[i][j]=input;
			}
		}
		for(j=0;j<column;j++){
			for(i=0;i<row;i++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	}
} 
