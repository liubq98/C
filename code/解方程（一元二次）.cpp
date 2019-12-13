#include <stdio.h>
#include <math.h>

  int getRoots(double a,double b,double c,double *rootOne,double *rootTwo){
  double delat;
  delat=b*b-4*a*c;
  if(delat<0)
    return 0;
  else
  {
    *rootOne=(-b+sqrt(delat))/(2*a);
    *rootTwo=(-b-sqrt(delat))/(2*a);
    return 1;
  }

  }
