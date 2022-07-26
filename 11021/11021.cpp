#include<stdio.h>

int main(){
	int a,b,c;
	int sum[100]={0,};
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		scanf("%d %d",&b,&c);
		sum[i]=b+c;	
	}
	for(int i=1;i<=a;i++){
		printf("Case #%d: %d\n",i,sum[i]);	
	}
	
	return 0;
}
