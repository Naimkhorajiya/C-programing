#include<stdio.h>
int main(){
	int i,j=1,factor=0;
	printf("enter number to get factor:");
	scanf("%d",&i);
	while(j<=i){
		if(i%j==0){
			factor=factor+1;
			printf("\n%d",j);
		}
		j++;
	}
	printf("\nfactor factor is %d",factor);

}
