#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	FILE *file_pointer;
	int choose;
	char str1[]="",str2[]="",str3[]="",str4[]="",str5[]="";
	char ch;
	char str[1024]="";
	
	printf("Choose a reading method(0-4, 0 to exit):\n");
	scanf("%d",&choose);
	while(choose!=0){
		if (choose<1||choose>4)
		{
			printf("Invalid choice. Please enter a number between 0 and 4\n");
		}
		else if(choose==1)
		{
			file_pointer=fopen("input.txt","r");
			printf("Way: getc()\n");
			do{
				ch=getc(file_pointer);
				printf("%c",ch);
			}while(ch!=EOF);
			printf("\n");
			fclose(file_pointer);
		}
		else if(choose==2)
		{
			file_pointer=fopen("input.txt","r");
			printf("Way: fscanf()\n");
			while(fscanf(file_pointer,"%c",str)!=EOF){
				printf("%s",str);
			}
			printf("\n");
			fclose(file_pointer);
		}
		else if(choose==3)
		{
			file_pointer=fopen("input.txt","r");
			printf("Way: fgets()\n");
			while(fgets(str,1024,file_pointer)!=NULL){
				printf("%s",str);
			}
			printf("\n");
			fclose(file_pointer);
		}
		else if(choose==4)
		{
			file_pointer=fopen("input.txt","r");
			printf("Way: fread()\n");
			int size=1;
			int length=1024;
			do{
				int read = fread(str,size,length,file_pointer);
				str[read]='\0';
				printf("%s",str);
			}while(!feof(file_pointer));
			printf("\n");
			fclose(file_pointer);
		}
		printf("Choose a reading method(0-4, 0 to exit):\n");
		scanf("%d",&choose);
	}
	if(choose==0)
	{
		printf("Exist program");
	}
	fclose(file_pointer);
	
	return 0;
	
} 
