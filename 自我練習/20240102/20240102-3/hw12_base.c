#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void generate(int arr[16][16],int bias[14][14]){
	srand(5);
	int i,j;
	FILE *file1=fopen("Matrix.txt","w");
	FILE *file2=fopen("Bias.txt","w");
	
	//generate matrix
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			arr[i][j]=rand()%21-10;
			fprintf(file1,"%4d",arr[i][j]);
		}
		fprintf(file1,"\n");
	}
	fclose(file1);
	
	//generate bias
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			bias[i][j]=1;
			fprintf(file2,"%4d",bias[i][j]);
		}
		fprintf(file2,"\n");
	}
	fclose(file2);
}  

void convolutional(int arr[16][16],float kernel[3][3],float conv[14][14],int bias[14][14],int result[14][14]){
	FILE *file=fopen("kernel.txt","r");
	FILE *file2=fopen("Conv.txt","w");
	int i=0,j=0,k,l;
	float read;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fscanf(file,"%f",&read);
			kernel[i][j]=read;
		}
	}
	//execute convolution
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			
			for(k=0;k<3;k++){
				for(l=0;l<3;l++){
					conv[i][j]+=kernel[k][l]*arr[i+k][j+l];
				}
			}
			result[i][j]=lround(conv[i][j])+bias[i][j];
			fprintf(file2,"%4d",lround(conv[i][j])+bias[i][j]);
		}
		fprintf(file2,"\n");
	}
	fclose(file);
	fclose(file2);
	
}

void relu(int result[14][14]){
	FILE *file=fopen("Result.txt","w");
	int i,j;
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			if(result[i][j]>=0){
				fprintf(file,"%4d",result[i][j]);
			}
			else{
				result[i][j]=0;
				fprintf(file,"%4d",0);
			}
		}
		fprintf(file,"\n");
	}
	fclose(file);
}

int main(){
	int arr[16][16],i,j;
	int bias[14][14];
	int result[14][14];
	float kernel[3][3];
	float conv[14][14]={0.0};
	
	generate(arr,bias);
	printf("Input:\n\n");
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nBias:\n\n");
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			printf("%4d",bias[i][j]);
		}
		printf("\n");
	}
	
	convolutional(arr,kernel,conv,bias,result);
	printf("\nkernel:\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %.3f",kernel[i][j]);
		}
		printf("\n");
	}
	printf("\nConvolution:\n\n");
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			printf("%4d",lround(conv[i][j])+bias[i][j]);
		}
		printf("\n");
	}
	
	
	relu(result);
	printf("\nResult:\n\n");
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			printf("%4d",result[i][j]);
		}
		printf("\n");
	}
}


