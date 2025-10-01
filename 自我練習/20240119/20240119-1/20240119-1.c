#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,ROW=29,COL=6;
	int a[ROW][COL];
	char s[ROW][10];
	
	FILE *text=fopen("pop_ntc.txt","r");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL+1;j++){
			if(j==0){
				fscanf(text,"%s",&s[i]);
			}
			else{
				fscanf(text,"%d",&a[i][j-1]);
			}
		}
	}
	fclose(text);
	for(i=0;i<ROW;i++){
		printf("%s\t",s[i]);
		for(j=0;j<COL;j++){
			printf("%d\t",a[i][j]);
		}
		putchar('\n');
	}
} 
