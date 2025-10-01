#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int M,N,i,j,k;
	printf("Enter the values of N and M(1 < N,M <10):");
	scanf("%d%d",&N,&M);
	while(M!=0 && N!=0){
		int arr1[N][M],arr2[M][N],arr3[N][N];
		if((M<=1||M>=10)||(N<=1||N>=10))
		{
			printf("Invalid Input: N and M must between 2 and 9.\n");
		}
		else
		{
			printf("Matrix 1:\n");
			for(i=0;i<N;i++){
				for(j=0;j<M;j++){
					arr1[i][j]=rand()%2;
					printf("%d ",arr1[i][j]);
				}
				printf("\n");
			}
			printf("Matrix 2:\n");
			for(j=0;j<M;j++){
				for(i=0;i<N;i++){
					arr2[j][i]=rand()%2;
					printf("%d ",arr2[j][i]);
				}
				printf("\n");
			}
			printf("Resulting Matrix:\n");
			for(i=0;i<N;i++){
				for(j=0;j<N;j++){
					arr3[i][j]=0;
					for(k=0;k<M;k++){
						arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
					}
					printf("%d ",arr3[i][j]);
				}
				printf("\n");
			}
		}
		printf("Enter the values of N and M(1 < N,M <10):");
		scanf("%d%d",&N,&M);
	}
	if(M==0 && N==0){
		printf("Finish!");
	}
}
