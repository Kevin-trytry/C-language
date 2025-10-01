#include<stdio.h>
int main(){
	int n,i,j,temp;
	while(scanf("%d",&temp)!=EOF){
		int password[10]={0},pos[4];
		for(i=0;i<4;i++){
			if(i==0)
				pos[i]=temp;
			else
				scanf("%d",&pos[i]);
			switch(pos[i]){
				case 0:
					password[0]++;
					break;
				case 1:
					password[1]++;
					break;
				case 2:
					password[2]++;
					break;
				case 3:
					password[3]++;
					break;
				case 4:
					password[4]++;
					break;
				case 5:
					password[5]++;
					break;
				case 6:
					password[6]++;
					break;
				case 7:
					password[7]++;
					break;
				case 8:
					password[8]++;
					break;
				case 9:
					password[9]++;
					break;
			}
		}
		
		scanf("%d",&n);
		for(i=0;i<n;i++){
			int keyin[10]={0};
			int A=0,B=0;
			for(j=0;j<4;j++){
				scanf("%d",&temp);
				if(temp==pos[j])
					A++;
				switch(temp){
					case 0:
						keyin[0]++;
						break;
					case 1:
						keyin[1]++;
						break;
					case 2:
						keyin[2]++;
						break;
					case 3:
						keyin[3]++;
						break;
					case 4:
						keyin[4]++;
						break;
					case 5:
						keyin[5]++;
						break;
					case 6:
						keyin[6]++;
						break;
					case 7:
						keyin[7]++;
						break;
					case 8:
						keyin[8]++;
						break;
					case 9:
						keyin[9]++;
						break;
				}
			}
			for(j=0;j<10;j++){
				B+=(password[j]>=keyin[j] ? keyin[j] : password[j]);
			}
			printf("%dA%dB\n",A,B-A);
		}
	}
} 
