#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	while(1){
		char s1[100],s2[100],temp;
		int i,count1=0,count2=0;
		printf("Please input a string :");
		scanf("%s",&s1);
		for(i=0;i<100;i++){
			if(s1[i]!=0)
			{
				count1++;
			}
			else
			  break;
		}
		int length=count1;
		s1[length],s2[length];
		for(i=0;i<length;i++){
			s2[length-1-i]=s1[i];
		}
		for(i=0;i<length;i++){
			if(s2[i]==s1[i])
			{
				count2++;
			}
		}
		if(count2==length)
		{
			printf("%s is polindrome\n\n",s1);
		}
		else
		{
			printf("%s is not polindrome\n\n",s1);
		}
	}
}
