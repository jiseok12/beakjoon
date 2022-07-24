#include<stdio.h>

int main(){
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	printf("%d %d",a+((b+c)/60)>=24?(a+(b+c)/60)%24 : a+((b+c)/60), (b+c)%60);
	
	return 0;
}
