#include<stdio.h>

int main(){
	int a,b;
	int sum=0;
	
	scanf("%d %d",&a,&b);
	
	sum=b<45&&a>0?(a*100+b)-85:(a*100+b)-45;
	if(sum<0){
		printf("%d %d",23,60+sum);
	}
	else
		printf("%d %d",sum/100,sum-((sum/100)*100));
	
	return 0;
}
