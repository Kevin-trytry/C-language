#include<stdio.h>
int main(){
	double a,b;
	float N;
	while(scanf("%lf %lf %N",&a,&b,&N)!=EOF){
		printf("%lf",a/b);
	}
}
