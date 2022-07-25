#include<stdio.h>

int main(){
	int a;
	
	scanf("%d",&a);
	
	printf((a%4==0&&a%100)||a%400==0?"1":"0");
	
	return 0;
}
