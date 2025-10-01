#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ASCII A~Z:65~90 a~z:97~122
int swapcase(char read[257]);
void sort(int len, char read[len], FILE *file2);

int main(){
	//11-1
	FILE *file=fopen("11-1input.txt","r");
	FILE *file2=fopen("11-1result.txt","w");
	char read[257];
	int len;
	while(fgets(read, 257, file)!=NULL){
		len=swapcase(read);
		sort(len,read,file2);
	}
	fclose(file);
	fclose(file2);
	
	//11-2
	int x,y,count=0,i;
	FILE *file3=fopen("11-2input.txt","r");
	while(fgets(read,257,file3)!=NULL){
		x=0;y=0,count++;
		len=strlen(read);
		for(i=0;i<len;i++){
			if(read[i]=='U')
				y++;
			else if(read[i]=='D')
				y--;
			else if(read[i]=='R')
				x++;
			else if(read[i]=='L')
				x--;
		}
		if(x==0&&y==0){
			printf("Time %d: True\n",count);
		}
		else 
			printf("Time %d: False\n",count);
	}
	fclose(file3);
} 

int swapcase(char read[257]){
	int length;
	int i;
	length=strlen(read)-1;
	for(i=0;i<length;i++){
		if(read[i]>64&&read[i]<91){
			read[i]=read[i]+32;
		}
		else if(read[i]>96&&read[i]<123){
			read[i]=read[i]-32;
		}
	}
	return length;
}

void sort(int len, char read[len],FILE *file2){
	int k,j,i;
	char temp;
	//insertion sort
	for(k=1;k<len;k++){
		temp=read[k];
		for(j=k-1;j>=0;j--){
			if(read[j]>temp){
				read[j+1]=read[j];
			}
			else 
				break;
		}
		read[j+1]=temp;
	}
	for(i=0;i<len;i++){
		fprintf(file2,"%c",read[i]);
	}
	fprintf(file2,"\n");

}
