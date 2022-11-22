#include<stdio.h>
int main(){
	int i,j, k=4,n;
	char a='A';
	for(i=1;i<=k;i++){
		for(j=1;j<=k-i;j++){
			printf(" ");
		}
		for(n=1;n<=i;n++){
			printf("%c ",a);
			a++;
		}
	printf("\n");
 }
}
