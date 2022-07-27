#include<stdio.h>

int main(){
	int a,count=0;
	int sum=0;
	
	for(int i=1;i<=9;i++){
		scanf("%d",&a);
		if(sum<a){
			sum=a;
			count=i;
		}	
	}
	printf("%d\n%d",sum,count);
	return 0;
}
