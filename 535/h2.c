#include<stdio.h>
int main()
{
  int n1,n2,ans,choise;
  printf("1.add\n");
  printf("2.sub\n");
  printf("3.mul\n");
  printf("4.div\n");
  printf("enter your choise:");
  scanf("%d,&choise:");
  printf("enter value n1 number:");
  scanf("%d",&n1);
  printf("enter value n2 number:");
  scanf("%d",&n2);
    if(choise==1)
   {
	 ans=n1+n2;
	 printf("ans:%d",ans);
   }
    if(choise==2)
	{
	ans=n1-n2;
	printf("ans:%d",ans);
	}
	
    if(choise==3)
     {
    ans=n1*n2;
    printf("ans:%d",ans);
     }
    printf("ans:%d",ans);
}
