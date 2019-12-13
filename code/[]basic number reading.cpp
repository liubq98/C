int basicNumberReading(base);

#include <stdio.h>
#include <string.h>
#include <math.h>
 
  int basicNumberReading(base){                                   
  	int length,iaa,jaa,kaa,number1=0;                      
  	char num[9]={0};           
  	                                      
  	  scanf("%s",num);
  	  length=strlen(num);
  	
  	  for(jaa=0;jaa<length;jaa++)                          //Õý×ÅÀ´ 
  	  {
  	    kaa=num[jaa]-'0';
  	    kaa=kaa*pow(base,length-jaa-1);                                 
  	    number1+=kaa;
  	  }
	  base=number1;                  
  	  number1=0;
  	  
  	return base;
  }
