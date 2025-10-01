#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	char buffer1[100][1024],buffer2[100][1024];
	int i=0,length,count1=0,count2=0,k,j;
	while(fgets(buffer1[i], 1024, stdin)!=NULL){
		length=strlen(buffer1[i]);
		for(j=0;j<length;j++)
			buffer2[i][length-j-1]=buffer1[i][j];
		count1++;
		i++;
	}
	for(k=0;k<count1;k++){
		for(j=0;j<strlen(buffer2[k]);j++){
			if(buffer2[k][j+1]==buffer1[k][j])
			{
				count2++;
			}
		}
		if(count2==strlen(buffer2[k])-1)
		{
			printf("%s",buffer2[k]);
		}
		count2*=0;
	}
}
