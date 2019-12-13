#include <stdio.h>
#include <math.h>

  int main(){
  	int a=0;
  	int b=0;
  	int c=0;
  	int b1=0;
  	int b2=0;
  	b2=pow(10,3.5);
  	float x=0;
  	float y=0;
  	double a1=0;
  	double a2=0;
  	double a3=0;
  	double a4=0;
  	double c1=0;
	double c2=0;	
  	scanf("%d %d %d %f %f",&a,&b,&c,&x,&y);
  	b1=a*a+b*b;
  	a1=1200/(24-4*5);
  	c2=sqrt(b1);
  	a2=c*c2;
  	c1=log(b2+2);
  	a3=log(c1);
  	a4=y+a%5*(int)(x+y)/2%4;
  	printf("%.3lf\n%.3lf\n%.3lf\n%.3lf\n",a1,a2,a3,a4);
  	return 0;
  }
