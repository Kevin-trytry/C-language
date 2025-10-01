#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){
	int a;
	FILE *file=fopen("123.txt","r");
	while(fscanf(file,"%d",&a)!=EOF){
		printf("%d ",a);
	}
	
	fclose(file);
}
