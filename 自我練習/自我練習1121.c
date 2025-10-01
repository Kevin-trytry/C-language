#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	//課堂實作二 
	char str1[100],str2[1024];
	int i;
	/*printf("Enter a string:");
	fflush(stdin);
	scanf("%s",&str1);
	printf("Using printf() and scanf():\n");
	for(i=0;i<3;i++){
		printf("%s",str1);
		printf("\n");
	}
	puts("Enter a string:");
	fflush(stdin);
	gets(str1);
	puts("Using puts() and gets():");
	for(i=0;i<3;i++){
		puts(str1);
	}*/
	//課堂實作三
	int count,j;
	/*printf("Please input a string:");
	while(fgets(str2, 1024, stdin)!=NULL){
		i=0;
		count=0;
		while(str2[i]!='\0'){
			count++;
			i++;
		}
		printf("Input string length is:%d\n",count-1);
		printf("Please input a string:");
	} 
	if(str2)
	{
		printf("Finish!");
	}*/
	
	//課堂實作四
	char strarr[5][100];
	printf("Enter a series of strings:\n");
		i=0;
		while(fgets(strarr[i], 100, stdin)!=NULL){
			if(strarr[i]==EOF) break;
			else i++;		
		}
		
	printf("Reversed ordered:\n");
	for(j=i-1;j>=0;j--){
		printf("%s",strarr[j]);
	}
	
}
