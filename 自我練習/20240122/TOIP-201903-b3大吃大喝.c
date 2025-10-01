#include<stdio.h>

int moneychange(int choice, int *money);

int main(){
	int money,minutes,totaltime,start,result;
	while(scanf("%d %d %d",&money,&minutes,&start)!=EOF){
		totaltime=0,result=0;
		if(start==0){
			if(money<32){
				printf("Wayne can't eat and drink.\n");
				result=-1;
			}
			while(result!=-1){
				result=moneychange(start,&money);
				if(start==0){
					if(money>0){
						printf("%d: Wayne eats an Apple pie, and now he has %d dollars.\n",totaltime,money);
					}
					else if(money==0){
						printf("%d: Wayne eats an Apple pie, and now he doesn't have money.\n",totaltime);
					}
					start=1;
				}	
				else if(start==1){
					if(money>0){
						printf("%d: Wayne drinks a Corn soup, and now he has %d dollars.\n",totaltime,money);
					}
					else if(money==0){
						printf("%d: Wayne drinks a Corn soup, and now he doesn't have money.\n",totaltime);
					}
					start=0;
				}
				totaltime+=minutes;
			}
		}
		else{
			if(money<55){
					printf("Wayne can't eat and drink.\n");
					result=-1;
				}
				while(result!=-1){
					result=moneychange(start,&money);
					if(start==0){
						if(money>0){
							printf("%d: Wayne eats an Apple pie, and now he has %d dollars.\n",totaltime,money);
						}
						else if(money==0){
							printf("%d: Wayne eats an Apple pie, and now he doesn't have money.\n",totaltime);
						}
						start=1;
					}	
					else if(start==1){
						if(money>0){
							printf("%d: Wayne drinks a Corn soup, and now he has %d dollars.\n",totaltime,money);
						}
						else if(money==0){
							printf("%d: Wayne drinks a Corn soup, and now he doesn't have money.\n",totaltime);
						}
						start=0;
					}
					totaltime+=minutes;
				}
		}
	} 
}
	

int moneychange(int choice,int *money){
	switch(choice){
		case 0:
			*money=*money-32;
			if(*money<32)
				return -1;
			else
				return 1;
		case 1:
			*money=*money-55;
			if(*money<55)
				return -1;
			else
				return 1;
	}
}

