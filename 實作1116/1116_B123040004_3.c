#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char str[1024];
	int i,count=-1;
	printf("Please input a string:");
	while(fgets(str, 1024, stdin)!=NULL){
		for(i=0;i<1024;i++){
			if(str[i]!='\0')
			{
				count++;
			}
			else if(str[i]=='\0')
			{
				break;
			}
		}
		printf("Input string length is: %d\n",count);
		count=-1;
		printf("Please input a string:");
	}
}
