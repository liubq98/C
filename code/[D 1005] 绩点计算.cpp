#include <stdio.h>

  int main(){
  	int a=0;
  	float b=0,c=0;
  	scanf("%d",&a);
  	if((a>=0)&&(a<=100))
  	{
  	if(a>=60)
  	{
  		b=a-50;
  		c=b/10;
  		printf("%.1f\n",c);
	  }
	else
	printf("Failed\n");
   }
   else
   printf("Invalid\n"); 
	return 0;
  }
