#include<stdio.h>
int main(){
	int i,fact=1;
	while(i<=10){
		fact=fact+i;
		i=i-1;
	}
	printf("factorial=%d",fact);
	printf("\nexiting program...");
}
