#include<stdio.h>
int main(){
	int i,j,k=4,n;
	for(i=1;i<=k;i++){
		for(j=1;j<=k-i;j++){
			printf(" ");
		}
		for(n=1;n<=i;n++){
			printf(" %d",n);
		}
	printf("\n");
 }
}
