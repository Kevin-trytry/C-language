#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
	char str1[100],str2[100];
	printf("Enter a string: ");
	scanf("%s", str1);
	printf("Using printf() and scanf():\n");
	for(i=0;i<3;i++){
		printf("%s\n",str1);
	}
	puts("Enter a string:");
	fflush(stdin);
	gets(str2);
	puts("Using puts() and gets():");
	for(i=0;i<3;i++){
		puts(str2);
	}
}
