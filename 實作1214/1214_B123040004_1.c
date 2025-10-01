#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void getword(char putin[]){
	int length=strlen(putin)-1;
	int i;
	for(i=0;i<length;i++){
		if(isspace(putin[i])==0)
			printf("%c",putin[i]);
		else
			printf("\n");
	}
	printf("\n");
} 
int main() {
	char input[1024];
	while(fgets(input, 1024, stdin)!=NULL){
		getword(input);
	}
	
}
