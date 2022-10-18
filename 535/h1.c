#include<stdio.h>
int main(){
	char a;
	printf ("enter value of char");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='e'||a=='I'||a=='O'||a=='U')
	{
		printf( "char is vovals");
	}
     else{
		printf("char is constant");
	} 
	return 0;
}

