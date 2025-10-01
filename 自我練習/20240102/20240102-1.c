#include<stdio.h>

int countnumber(int i);

int main(){
	int i=3;
	countnumber(i);
	return 0;
} 

int countnumber(int i){
	if(i==1){
		printf("%d",i);
		return i;
	}
	printf("%d\n",i);
	return countnumber(i-1);
}
