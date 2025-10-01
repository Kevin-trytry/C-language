#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int filter1[3][3]={{0,0,0},{0,1,0},{0,0,0}};
	int filter2[3][3]={{-1,0,-1},{-1,0,-1},{-1,0,-1}};
	int filter3[3][3]={{-1,-1,-1},{-1,8,-1},{-1,-1,-1}};
	int i,j,k,l;
	
	while(1){
		int image[5][5];
		int choose;
		int Result[3][3]={0};
		printf("Image:\n");
		for(i=0;i<5;i++){  //generate image
			for(j=0;j<5;j++){
				image[i][j]=rand()%21-10;
				printf("%4d ",image[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		printf("Please select a filter :");
		scanf("%d",&choose);
		while(choose>3||choose<1){ //Make sure the value of choose is between 1 and 3
			printf("Please select from 1 to 3\n\n");
			printf("Please select a filter :");
			scanf("%d",&choose);
		}
		
		if(choose==1)
		{
			printf("Filter 1 :\n");
			for(i=0;i<3;i++){ //print out the filter
				for(j=0;j<3;j++){
					printf("%4d ",filter1[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
			printf("Result:\n"); 
			for(k=0;k<3;k++){ //execute the convolutional neural networks
				for(l=0;l<3;l++){
					for(i=k;i<k+3;i++){
						for(j=l;j<l+3;j++){
							Result[k][l]+=image[i][j]*filter1[i-k][j-l];
						}
					}
					printf("%4d ",Result[k][l]);
				}
				printf("\n");
			}
			printf("\n");
		}
		
		else if(choose==2)
		{
			printf("Filter 2 :\n");
			for(i=0;i<3;i++){ //print out the filter
				for(j=0;j<3;j++){
					printf("%4d ",filter2[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
			printf("Result:\n");
			for(k=0;k<3;k++){  //execute the convolutional neural networks
				for(l=0;l<3;l++){
					for(i=k;i<k+3;i++){
						for(j=l;j<l+3;j++){
							Result[k][l]+=image[i][j]*filter2[i-k][j-l];
						}
					}
					printf("%4d ",Result[k][l]);
				}
				printf("\n");
			}
			printf("\n");
		}
		
		else if(choose==3)
		{
			printf("Filter 3 :\n");
			for(i=0;i<3;i++){ //print out the filter
				for(j=0;j<3;j++){
					printf("%4d ",filter3[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
			printf("Result:\n");
			for(k=0;k<3;k++){  //execute the convolutional neural networks
				for(l=0;l<3;l++){
					for(i=k;i<k+3;i++){
						for(j=l;j<l+3;j++){
							Result[k][l]+=image[i][j]*filter3[i-k][j-l];
						}
					}
					printf("%4d ",Result[k][l]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
}
