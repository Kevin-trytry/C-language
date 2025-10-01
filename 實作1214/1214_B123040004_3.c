#include<stdio.h>
#include<stdlib.h>
char mystrstr(char input[], char pattern[]){
	int i;
	for(i=0;i<1024;i++){
		if(pattern[i]=='\0')
			break;
	}
	printf("%d",i);
}

int main(){
	while(1){
		int i=0;
		char S[2049],W[1024];
		while(scanf("%c",&S[i])){
			if(S[i]==',')
				break;
			i++;
		}
		i=0;
		while(scanf("%c",&W[i])){
			if(W[i]=='\n')
				break;
			i++;
		}
		mystrstr(S,W);
	}
}
