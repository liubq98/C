#include<stdio.h>
#include <math.h>

int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n%d\n%d\n",a+b,a-b,a*b);
  if(b==0)
  printf("Error\n");
  else
  printf("%.2f\n",(float)a/b);
  printf("%.2f\n",(float)sqrt(a));
    return 0;
}
