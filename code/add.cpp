#include <stdio.h>
#include <stdlib.h>

  void add(char lhs[], char rhs[], char sum[]){
  	long sum2;
  	
  	sum2=atoi(lhs)+atoi(rhs);
  	sprintf(sum,"%d",sum2);
  	
   }
