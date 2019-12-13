#include <stdio.h>

  int main(){
  int a1=0;
  float b=0;
  unsigned long c=0;
  long long d=0;
  double e=0;
  scanf("a %d %f %u %lld %lf",&a1,&b,&c,&d,&e);
  printf("a %d %.2f %u %lld %.7lf\n",a1,b,c,d,e);
  return 0;
  }
