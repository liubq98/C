#include <stdio.h>

  int main(){
    int num1,num2,numa,numb;
    scanf("%d %d",&numa,&numb);
    if((numa<=0)||(numb<=0))
    {
      printf("invalid\n");
      return 1;
    }
    int remainder;
    num1=numa;
    num2=numb;
    while(num2!=0)
    {
      remainder=num1%num2;
      num1=num2;
      num2=remainder;
    }
    
    int gcd,lcm;
    gcd=num1;
    lcm=numa*numb/gcd;
    if((gcd<=0)||(lcm<=0))
      printf("invalid\n");
    else
      printf("%d %d\n",gcd,lcm);

  return 0;
  }
