#include <stdio.h>

  int main(){
  	int a1=0;
  	int a2=0;
  	int b1=0;
  	int b2=0;
  	int x;
  	scanf("%d%d\n",&a1,&b1);
  	scanf("%d%d",&a2,&b2);
    int num1=0;
    int num2=0;
    int num3=0;
    num1=a1*a2;
    num2=a1*b2+a2*b1;
    num3=b1*b2;
  	printf("%dx^2+%dx+%d\n",num1,num2,num3);
  	return 0;
  }
