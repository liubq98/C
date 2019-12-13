#include <stdio.h>
#include <math.h>
  int main(){
	int a=0;
	int b=0;
	int c=0;
	double d=0;
	double e=0;
	scanf("%d%d%d",&a,&b,&c);
    d=(-b+sqrt(b*b-4*a*c))/(2*a);
    e=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("%.3lf %.3lf\n",e,d);
    return 0;
	
}
