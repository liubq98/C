#include <stdio.h>

  int main(){
  	int a,b,c;
  	scanf("%d %d %d",&a,&b,&c);
  	int sum1,sum2,sum3;
  	sum1=a+b;
  	sum2=b+c;
  	sum3=a+c;
  	if ((sum1>c)&&(sum2>a)&&(sum3>b))
  	printf("valid\n");
  	else
  	printf("invalid\n");
  	return 0;
  }
