#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[101];
	int i,len,j;
	while(1){
		char x='A';
		int count[26]={0};
		printf("Please input a string: ");
		scanf("%s",input);
		len=strlen(input);
		for(i=0;i<len;i++){
			if(input[i]<65||(input[i]>90&&input[i]<97)||input[i]>122)
			{
				printf("\nThe string includes illegal character!\n\n");
				break;
			}
			else
			{
				continue;
			}
		}
		if(i==len)
		{
			for(j=0;j<len;j++){
				switch(input[j]){
					case 'A':
					case 'a':
						count[0]++;
						break;
					case 'B':
					case 'b':
						count[1]++;
						break;
					case 'C':
					case 'c':
						count[2]++;
						break;
					case 'D':
					case 'd':
						count[3]++;
						break;
					case 'E':
					case 'e':
						count[4]++;
						break;
					case 'F':
					case 'f':
						count[5]++;
						break;
					case 'G':
					case 'g':
						count[6]++;
						break;
					case 'H':
					case 'h':
						count[7]++;
						break;
					case 'I':
					case 'i':
						count[8]++;
						break;
					case 'J':
					case 'j':
						count[9]++;
						break;
					case 'K':
					case 'k':
						count[10]++;
						break;
					case 'L':
					case 'l':
						count[11]++;
						break;
					case 'M':
					case 'm':
						count[12]++;
						break;
					case 'N':
					case 'n':
						count[13]++;
						break;
					case 'O':
					case 'o':
						count[14]++;
						break;
					case 'P':
					case 'p':
						count[15]++;
						break;
					case 'Q':
					case 'q':
						count[16]++;
						break;
					case 'R':
					case 'r':
						count[17]++;
						break;
					case 'S':
					case 's':
						count[18]++;
						break;
					case 'T':
					case 't':
						count[19]++;
						break;
					case 'U':
					case 'u':
						count[20]++;
						break;
					case 'V':
					case 'v':
						count[21]++;
						break;
					case 'W':
					case 'w':
						count[22]++;
						break;
					case 'X':
					case 'x':
						count[23]++;
						break;
					case 'Y':
					case 'y':
						count[24]++;
						break;
					case 'Z':
					case 'z':
						count[25]++;
						break;																		
				}
			}
			printf("\nCount result:\n");
			for(i=0;i<26;i++){
				if(i%6==0)
					printf("\n");
				printf(" %c : %d ",x,count[i]);
				x++;
			}
			printf("\n\n");
		}
	}
} 
