#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	
	//11.1 
	char str[256]="",temp;
	FILE *file1,*file2;
	int len,i=0,k,j;
	//�]�w�ɮ׫��� 
	file1=fopen("11-1input.txt","r");
	file2=fopen("11-1result.txt","w");
	while(fscanf(file1,"%s",str)!=EOF){
		len=strlen(str);
		//���J�ƧǪk 
		for(k=1;k<len;k++){
			temp=str[k];
			for(j=k-1;j>=0;j--){
				if(str[j]>temp)
				{
					str[j+1]=str[j];
				}
				else
					break;
			}
			str[j+1]=temp;
		}
		//�ק�j�p�g 
		for(i=0;i<len;i++){
			if(str[i]>64&&str[i]<91)
			{
				str[i]+=32;
			}
			else if(str[i]>96&&str[i]<122)
			{
				str[i]-=32;
			}
		}
		//�L��result�W 
		fprintf(file2,"%s\n",str);
	}
	fclose(file1);
	fclose(file2);
	
	//11.2 
	FILE *file3;
	int x,y;
	j=1;
	file3=fopen("11-2input.txt","r"); //Ū���ɮפ��U�r���� 
	while(fscanf(file3,"%s",str)!=EOF){
		x=0,y=0;
		len=strlen(str); //����r����� 
		for(i=0;i<len;i++){ //�W�U���k�� 
			if(str[i]=='U')
				y+=1;
			else if(str[i]=='D')
				y-=1;
			else if(str[i]=='R')
				x+=1;
			else if(str[i]=='L')
				x-=1;
		}
		if(x==0&&y==0)
		{
			printf("Time %d : True\n",j);
			j++;
		}
		else
		{
			printf("Time %d : False\n",j);
			j++;
		}
	}
} 
