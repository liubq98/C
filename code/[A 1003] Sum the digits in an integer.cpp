#include <stdio.h>
  int main(){
    int a=0;
    scanf("%d",&a);
    int a1=0;
    int a2=0;
    int a3=0;
    a1=a/100;
    a2=(a-a1*100)/10;
    a3=a-a1*100-a2*10;
    int num1=0;
	num1=a1+a2+a3;
    printf("%d\n",num1);
  	return 0;
  }
