#include<stdio.h>
int main(){
	int a[10],i,max=0,min=0,sum=0;
	float avr=0;
	for(i=0;i<10;i++){
		printf("enter element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(i==0)
		max=a[i];
		min=a[i];
		if(a[i]<min)
		min=a[i];
		if(a[i]<max)
		max=(a[i]>max);
		sum=sum+a[i];
	}
	avr=(float)sum/(i+1);
	printf("max no is:%d\n",max);
	printf("min no is:%d\n",min);
	printf("avrage no is:%d\n",avr);

}
