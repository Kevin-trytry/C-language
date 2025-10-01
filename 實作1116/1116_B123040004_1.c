#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char str[]="I am Groot";
	int i;
	printf("The entire string: %s\n",str);
	printf("Character by character:\n");
	for(i=0;i<10;i++){
		printf("The %d character is %c\n",i,str[i]);
	}
} 
