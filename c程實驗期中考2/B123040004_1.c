#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
	char str[100][101];
	int i=0,len,j;
	while(fgets(str[i], 101, stdin)!=NULL){
		len=strlen(str[i])-1;
		for(j=0;j<len;j++){
			if(str[i][j]=='a'||str[i][j]=='d'||str[i][j]=='g'||str[i][j]=='j'||str[i][j]=='m'||str[i][j]=='p'||str[i][j]=='t'||str[i][j]=='w')
			{
				printf("%c%d",str[i][j],1);
			}
			else if(str[i][j]=='b'||str[i][j]=='e'||str[i][j]=='h'||str[i][j]=='k'||str[i][j]=='n'||str[i][j]=='q'||str[i][j]=='u'||str[i][j]=='x')
			{
				printf("%c%d",str[i][j],2);
			}
			else if(str[i][j]=='c'||str[i][j]=='f'||str[i][j]=='i'||str[i][j]=='l'||str[i][j]=='o'||str[i][j]=='r'||str[i][j]=='v'||str[i][j]=='y')
			{
				printf("%c%d",str[i][j],3);
			}
			else if(str[i][j]=='s'||str[i][j]=='z')
			{
				printf("%c%d",str[i][j],4);
			}
		}
		i++;
		printf("\n");
	}
} 
