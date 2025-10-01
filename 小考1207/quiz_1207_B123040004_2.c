#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void quotes(char str2[]){
	int len,i,point1,point2,count1,j,count2;
	len=strlen(str2)-1;
	printf("%d",len);
	count1=0,count2=0;
	i=0;
	for(i=0;i<len;i++){
		if(str2[i]=='"'&&count1==0){
			point1=i+1;
			count1++;
		}
		else if(str2[i]=='"'&&count1==1){
			point2=i-1;
			count1=0;
			count2++;
		}
		
		if (count2==1)
		{
			for(j=point1;j<=point2;j++){
				printf("%c",str2[j]);
			}
			count2=0;
			printf("\n");
		}
	}
}
int main(){
	char str[2049];
	int i=0;
	while(fgets(str, 2049, stdin)!=NULL){
	}
	quotes(str);
}
