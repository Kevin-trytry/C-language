#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char str[5][100];
	int i;
	puts("Enter a series of strings:");
	for(i=0;i<5;i++){
		fgets(str[i], 100, stdin);
		if(str[i]==NULL)
			break;
	}
	printf("Reversed ordered:\n");
	for(i=i-1;i>=0;i--){
		printf("%s",str[i]);
	}
}
