#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
	char str[129],str2,count=0;
	int i,j=0,len;
	while(fgets(str, 129, stdin)!=NULL){
		len=strlen(str)-1;
		for(i=0;i<len;i++){
			if(str[i]==' '&&count==0)
			{
				continue;
			}
			else
			{
				count++;
				if(str[i]==' '&&str[i+1]==' ')
				{
					continue;
				}
				printf("%c",str[i]);
			}
		}
		printf("\n");
		count*=0;
	}
} 
