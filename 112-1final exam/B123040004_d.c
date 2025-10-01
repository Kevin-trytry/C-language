#include<stdio.h>
#include<string.h>
int main(){
	char ch[1024];
	FILE *file=fopen("Student.txt","r");
	printf("%6s%10s%6s%6s%6s\n","ID","Name","Chi","Eng","Math");	
	while(1){
		while(fscanf(ch, 1024, file)!=NULL){
			printf("  %s",ch);
		}
	}
	fclose(file);
}
