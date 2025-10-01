#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h> 
int main(){
	char buffer[1024],temp;
	int i=0,j,max,length=0;
	while(fgets(buffer, 1024, stdin)!=NULL){
		max=strlen(buffer);
		if(max>length)
		{
			length=max;
			temp=buffer;
		}
	}
	printf("%s",temp);
}
