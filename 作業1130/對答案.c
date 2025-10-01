#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void generate(){
	FILE *gene=fopen("Matrix.txt","w+");
	int i,j,a[16][16];
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			a[i][j]=rand()%21-10;
			fprintf(gene,"%4d ",a[i][j]);
		}
		fprintf(gene,"\n");
	}
	fclose(gene);
}  

void convolutional(int a,int b,int rand[16][16],float kernel[3][3],int bi[14][14], FILE *convol){
	int i,j;
	float sum=0;
	for(i=a;i<a+3;i++){
		for(j=b;j<b+3;j++){
			sum+=rand[i][j]*kernel[i-a][j-b];
		}
	}
	sum+=bi[a][b];
	fprintf(convol,"%4d ",lround(sum));
}

void relu(int result[14][14]){
	FILE *conse=fopen("Result.txt","w+");
	int i,j;
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			if(result[i][j]<0) result[i][j]=0;
			fprintf(conse,"%4d ",result[i][j]);
		}
		fprintf(conse,"\n");
	}
	fclose(conse);
}

int main(){
	FILE *ker=fopen("kernel.txt","r");
	FILE *gene=fopen("Matrix.txt","r");
	FILE *bias=fopen("Bias.txt","w+");
	FILE *convol=fopen("Conv.txt","w+");
	FILE *conse=fopen("Result.txt","r");
	srand(5);
	int rand[16][16],bi[14][14],i,j,k;
	
	
	printf("Input:\n\n");
	generate();
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			fscanf(gene,"%d",&rand[i][j]);
			printf("%4d ",rand[i][j]);
		}
		printf("\n");
	}


	printf("\nBias:\n\n");
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			bi[i][j]=1;
			printf("%4d ",bi[i][j]);
			fprintf(bias,"%4d ",bi[i][j]);
		}
		printf("\n");
		fprintf(bias,"\n");
	}
	
	
	float kernel[3][3];
	printf("\nkernel:\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fscanf(ker,"%f",&kernel[i][j]);
			printf("%6.3f ",kernel[i][j]);
		}
		printf("\n");
	}
	
	printf("\nConvolutional:\n\n");
	int result[14][14];
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			convolutional(i,j,rand,kernel,bi,convol);
		}
		fprintf(convol, "\n");
	}
	
	fclose(convol);
	FILE *convol1=fopen("Conv.txt","r");
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			fscanf(convol1,"%4d",&result[i][j]);
			printf("%4d ",result[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nResult:\n\n");
	relu(result);
	int newresult[14][14];
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			fscanf(conse,"%4d",&newresult[i][j]);
			printf("%4d ",newresult[i][j]);
		}
		printf("\n");
	}
	fclose(gene);
	fclose(ker);
	//system("Matrix.txt");
	fclose(bias);
	fclose(convol1);
	fclose(conse);
	//system("Bias.txt");
	//system("Conv.txt");
	//system("Result.txt");
	return 0;
}
