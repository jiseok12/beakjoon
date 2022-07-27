#include<stdio.h>

int main(){
	int a,count=0,sum=0;
	char prob[81]={0,};
	int sum2[100]={0,};
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		scanf("%s",prob);
		sum=0;
		count=0;
		for(int j=0;prob[j]!='\0';j++){
			if(prob[j]=='X'){
				count=0;	
			}
			else if(prob[j]=='O'){
				count=count+1;
				sum=sum+count;
			}
		}
		sum2[i]=sum;
	}
	
	for(int i=1;i<=a;i++)
		printf("%d\n",sum2[i]);
	
	return 0;
}
