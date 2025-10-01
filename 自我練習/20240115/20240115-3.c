#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//example
	/*struct friend{
		int code;
		struct friend *next;
	};
	struct friend node[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&node[i].code);
		node[i].next=&node[node[i].code];
	}*/
	
	
	//exercise
	
	
	struct friends{
		int num;
		struct friends *next;
	}; 
	
	
	int i,N,group=0;
	printf("Please enter the amount of students:");
	scanf("%d",&N);
	struct friends node[N];
	printf("Please enter the friends of every number:");
	
	//build link list
	for(i=0;i<N;i++){
		scanf("%d",&node[i].num);
		node[i].next=&node[node[i].num];
	}
	
	int bestfrienddata;
	
	for(i=0;i<N;i++){
		if(node[i].next!=NULL){
			printf("{%d",i);
			
			while(node[i].next!=NULL){
				bestfrienddata=node[i].num;
				if(i!=bestfrienddata&&node[bestfrienddata].next!=NULL){
					printf(",%d",bestfrienddata);
				}
				node[i].next=NULL;
				i=bestfrienddata;
			}
			node[bestfrienddata].next=NULL;
			printf("}\n");
			group++;
		}
	}
	
	printf("%d",group);
}
