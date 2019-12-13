#include <stdio.h>

  int main(){
  	int sum1,sum2,sum3;
  	scanf("%d %d",&sum1,&sum2);
  	sum3=sum1+sum2;
  	if (sum3%sum2==0)
  	printf("%d\n",sum3);
  	else
  	printf("%d\n",sum1);
  	return 0;
  }
