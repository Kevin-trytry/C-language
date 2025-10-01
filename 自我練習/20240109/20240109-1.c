#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[1002];
	int len,i,odd,even;
	while(scanf("%s",input)!=EOF){
		odd=0,even=0;
		int collect[26]={0};
		len=strlen(input);
			for(i=0;i<len;i++){
				switch(input[i]){
					case 'A':
					case 'a':
						collect[0]++;
						break;
					case 'B':
					case 'b':
						collect[1]++;
						break;
					case 'C':
					case 'c':
						collect[2]++;
						break;
					case 'D':
					case 'd':
						collect[3]++;
						break;
					case 'E':
					case 'e':
						collect[4]++;
						break;
					case 'F':
					case 'f':
						collect[5]++;
						break;
					case 'G':
					case 'g':
						collect[6]++;
						break;
					case 'H':
					case 'h':
						collect[7]++;
						break;
					case 'I':
					case 'i':
						collect[8]++;
						break;
					case 'J':
					case 'j':
						collect[9]++;
						break;
					case 'K':
					case 'k':
						collect[10]++;
						break;
					case 'L':
					case 'l':
						collect[11]++;
						break;
					case 'M':
					case 'm':
						collect[12]++;
						break;
					case 'N':
					case 'n':
						collect[13]++;
						break;
					case 'O':
					case 'o':
						collect[14]++;
						break;
					case 'p':
					case 'P':
						collect[15]++;
						break;
					case 'Q':
					case 'q':
						collect[16]++;
					case 'R':
					case 'r':
						collect[17]++;
						break;
					case 'S':
					case 's':
						collect[18]++;
						break;
					case 'T':
					case 't':
						collect[19]++;
						break;
					case 'U':
					case 'u':
						collect[20]++;
						break;
					case 'V':
					case 'v':
						collect[21]++;
						break;
					case 'W':
					case 'w':
						collect[22]++;
						break;
					case 'X':
					case 'x':
						collect[23]++;
						break;
					case 'Y':
					case 'y':
						collect[24]++;
						break;
					case 'Z':
					case 'z':
						collect[25]++;
						break;
				}
			}
			for(i=0;i<26;i++){
				if((collect[i]%2==0)&&(collect[i]!=0))
					even++;
				else if(collect[i]%2!=0)
					odd++;
			}
			if(odd<=1&&even>=0)
				printf("yes !\n");
			else
				printf("no...\n");
		
	}
} 
