#include <stdio.h>
#include <string.h>
#include <math.h>
 
  int main(){                                   
  	int n_line,b_jingzhi,length,iaa,jaa,kaa,maa,number1=0,number2=0;                      
  	char num[9]={0};
  	char num2[9]={0};
  	scanf("%d %d",&n_line,&b_jingzhi);              
  	for(iaa=0;iaa<n_line;iaa++)                    
  	{                                        
  	  scanf("%s",num);
  	  length=strlen(num);
  	
  	  for(jaa=0;jaa<length;jaa++)                          //正着来 
  	  {
  	    kaa=num[jaa]-'0';
  	    kaa=kaa*pow(b_jingzhi,length-jaa-1);                                 
  	    number1+=kaa;
  	  }
  	  printf("%d ",number1);                  
  	  number1=0;
  	  int Laa=length;                               //反着来 
  	  for(jaa=0;jaa<length;jaa++)
  	  {
  	  	num2[jaa]=num[Laa-1];
  	  	Laa--;                                   
  	  }                                         
  	                                      
	  for(jaa=0;jaa<length;jaa++)                          
  	  {
  	    kaa=num2[jaa]-'0';
  	    kaa=kaa*pow(b_jingzhi,length-jaa-1);                              
  	    number2+=kaa;
  	  }
  	  printf("%d\n",number2);                      
  	  number2=0;
  	 }
  	return 0;
  }
