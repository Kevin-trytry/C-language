#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
//生成矩陣以及Bias 
void generate(int x1, int y1, int a[x1][y1], int x2, int y2, int b[x2][y2]){
	srand(5);
	FILE *file1=fopen("Matrix.txt","w");
	FILE *file2=fopen("Bias.txt","w");
	int i,j;
	
	//生成隨機數的陣列並寫入Matrix.txt 
	printf("Input :\n\n");
	for(i=0;i<x1;i++){
		for(j=0;j<y1;j++){
			a[i][j]=rand()%21-10;
			fprintf(file1,"%4d",a[i][j]);
			printf("%4d",a[i][j]);
		}
		fprintf(file1,"\n");
		printf("\n");
	}
	
	//生成Bias並寫入Bias.txt 
	printf("\nBias :\n\n");
	for(i=0;i<x2;i++){
		for(j=0;j<y2;j++){
			b[i][j]=1;
			fprintf(file2,"%4d",b[i][j]);
			printf("%4d",b[i][j]);
		}
		fprintf(file2,"\n");
		printf("\n");
	}
	fclose(file1);
	fclose(file2);
}  

//卷積運算 
void convolutional(int n1, int n2, int c[n1][n2], int d[n1-2][n2-2], int g[n1-2][n2-2]){
	FILE *file=fopen("kernel.txt","r");
	FILE *file2=fopen("Conv.txt","w");
	int i=0,j=0,k,l;
	float kernel[3][3],temp1=0.0,sum=0;
	char temp[6];

	//將Kernel導入至kernel陣列當中 	
	printf("\nKernel :\n\n");
	while(fscanf(file,"%s",temp)!=EOF){
		kernel[i][j]=atof(temp);
		printf("%.3f ",kernel[i][j]);
		if(j==2)
		{
			i++;
			j=0;
			printf("\n");
		}
		else
			j++;
	}
	
	
	//進行卷積運算 
	printf("\nConvolution :\n\n");
	for(k=0;k<n1-2;k++){
		for(l=0;l<n2-2;l++){
			for(i=k;i<k+3;i++){
				for(j=l;j<l+3;j++){
					sum+=c[i][j]*kernel[i-k][j-l];
				}
			}
			sum+=g[k][l];
			printf("%4d",lround(sum));
			fprintf(file2,"%4d",lround(sum));
			sum*=0;
		}
		printf("\n");
		fprintf(file2,"\n");
	}
	printf("\n\n");
	fclose(file);
	fclose(file2);
}

//Relu運算 
void relu(int n1, int n2, int e[n1][n2]){
	FILE *file=fopen("Result.txt","w");
	FILE *file2=fopen("Conv.txt","r");
	int i,j;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			fscanf(file2,"%d",&e[i][j]);
		}
	}
	//計算經過Relu的結果 
	printf("\nResult :\n\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(e[i][j]>0)
			{
				printf("%3d ",e[i][j]);
				fprintf(file,"%3d ",e[i][j]);
			}
			else if(e[i][j]==0)
			{
				printf("%3d ",e[i][j]);
				fprintf(file,"%3d ",e[i][j]);
			}
			else
			{
				e[i][j]=0;
				printf("%3d ",e[i][j]);
				fprintf(file,"%3d ",e[i][j]);
			}
		}
		printf("\n");
		fprintf(file,"\n");
	}
	fclose(file);
	fclose(file2);
}

int main(){
	int i,j;
	int Matrix[16][16],Bias[14][14],Result[14][14];
	generate(16, 16, Matrix, 14, 14, Bias);
	convolutional(16, 16, Matrix, Result, Bias);
	relu(14,14, Result);
	
}


