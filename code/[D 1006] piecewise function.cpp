#include <stdio.h>
#include <math.h>
  int main(){
  	float x;
  	float y;
  	scanf("%f",&x);
  	if(x<-1)
  	{
  	  y=x+1;
  	  printf("%.2f\n",y);
  	}
  	else if((x>=-1)&&(x<0))
  	{
  	  y=-x;
  	  printf("%.2f\n",y);
    }
  	else if((x>=0)&&(x<1))
  	{
  	  y=x;
  	  printf("%.2f\n",y);
    }
    else if(x>=1)
    {
      y=log10(x);
      printf("%.2f\n",y);
    }
  return 0;
  }
