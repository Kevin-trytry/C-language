#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std; 
int main(){
	struct employee //ÃÑ§O¦r
	{
		char id[6];
		char name[12];
		int age;
		char phone[12];
		char address[12]; 
	};
	
	struct employee normal;
	struct employee group[3];
	struct employee *ptr;
	ptr=&normal;
	normal.phone="0912345678x";
	group[0].address="News";
	ptr->age=36;
	printf("%s",normal.phone);
}
