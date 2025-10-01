#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[8];
	int i,key;
	for(i=0;i<8;i++){
		scanf("%c",&input[i]);
	}
	for(i=0;i<6;i++){
		key=input[i]-input[i+1];
		if(key>=0)
			printf("%d",key);
		else
			printf("%d",0-key);
	}
} 
