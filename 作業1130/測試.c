#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *file=fopen("kernel.txt","r");
	float kernel[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fscanf(file,"%f",&kernel[i][j]);
			printf("%.3f ",kernel[i][j]);
		}
		printf("\n");
	}
} 
