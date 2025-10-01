#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
	char str[41];
	int i=0,len,count=0,j;
	while(fgets(str, 41, stdin)!=NULL){
		len=strlen(str)-1;
		for(i=0;i<len;i++){
			if(str[i]<48||str[i]>57)
				{
					count++;
				}
		}
		if(count==0)
		{
			printf("Parsing Succefully: %s",str);
		}
		else
		{
			
			if(count==1)
			{
				printf("Panic: %d Error was detected.\n",count);
				j=0;
				printf("The input has following invalid character:\n");
				for(i=0;i<len;i++){
					if(str[i]<48||str[i]>57)
					{
						j++;
						printf("[%d] Position: %d, Invalid character: %c\n",j,i+1,str[i]);
					}
				}
				printf("Repaired result is ");
				for(i=0;i<len;i++){
					if(str[i]>47&&str[i]<58)
						printf("%c",str[i]);
				}
				printf(".");
				printf("\n---\n");
			}
			else
			{
				printf("Panic: %d Errors were detected.\n",count);
				j=0;
				printf("The input has following invalid characters:\n");
				for(i=0;i<len;i++){
					if(str[i]<48||str[i]>57)
					{
						j++;
						printf("[%d] Position: %d, Invalid character: %c\n",j,i+1,str[i]);
					}
				}
				printf("Repaired result is ");
				for(i=0;i<len;i++){
					if(str[i]>47&&str[i]<58)
						printf("%c",str[i]);
				}
				printf(".");
				printf("\n---\n");
			}
		}
		count=0;
	}
	
} 
