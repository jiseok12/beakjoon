#include<stdio.h>

int main(){
	int a;
	
	scanf("%d",&a);
	for(int i=a-1;i>=0;i--){
		for(int j=0;j<a;j++){
			printf(j>=i?"*":" ");
		}
		printf("\n");
	}
	return 0;
}
