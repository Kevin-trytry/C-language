#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int a,A=0,B=0,i;
	int randum,c,j,k,l;
	while(c==j||c==k||c==l||j==k||j==l||k==l){
		c=rand()%10;
		j=rand()%10;
		k=rand()%10;
		l=rand()%10;
		}
	
	for(i=9;i>=0;i--){
		printf("Input four diffenent number:(例如2178)");
		scanf("%d",&a);
		int n1=a%10,n2=a/10%10,n3=a/100%10,n4=a/1000;
		while(n1==n2||n1==n3||n1==n4||n2==n3||n2==n4||n3==n4){
		
			printf("Numbers should not be repeated. Try again.\n");
			printf("Input four diffenent number:(例如2178)");
			scanf("%d",&a);
			n1=a%10,n2=a/10%10,n3=a/100%10,n4=a/1000;
			}
		if(n1==c && n2==j && n3==k && n4==l )
			{
				printf("您猜對了!");
				break;
			}	
		if(n1==c)
			A++;
		if(n2==j)
			A++;
		if(n3==k)
			A++;
		if(n4==l)
			A++;
		if(n1==j||n1==k||n1==l)
			B++;
		if(n2==c||n2==k||n2==l)
			B++;
		if(n3==c||n3==j||n3==l)
			B++;
		if(n4==c||n4==j||n4==k)
			B++;
		printf("結果:%dA%dB，還有%d次機會\n",A,B,i);
			A*=0,B*=0;
 		}
 	
 	
 	if(i==-1)
	printf("失敗，猜超過十次，答案是%d%d%d%d",l,k,j,c);
	 
	return 0; 
} 
  
