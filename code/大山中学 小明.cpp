#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  int main(){
    int i,length,time,j=0,num,n=0;
    char message[100]={0};
    char number[10]={0};
    char letter;
    
	scanf("%s",message);
    length=strlen(message);
    
    for(i=0;i<length;i++)
    {
      if((message[i]<'0')||(message[i]>'9'))
        printf("%c",message[i]);
      else
      {
        if((message[i-1]<'0')||(message[i-1]>'9'))
        {
        	letter=message[i-1];
		}
		
	    if((message[i]>='0')&&(message[i]<='7')&&((message[i+1]<'0')||(message[i+1]>'9'))&&((message[i-1]<'0')||(message[i-1]>'9')))
        {
      	  for(j=0;j<message[i]-'0'-1;j++)
		  printf("%c",message[i-1]);
	    }
	  
	    else 
	    {
	  	  number[n]=message[i];
	  	  n++;
	  	  if((message[i+1]<'0')||(message[i+1]>'9'))
	  	  {
	  	    num=atoi(number);
	  	    time=num%7;
	  	    for(j=0;j<time;j++)
	  	    printf("%c",letter);
	  	    for(j=n-1;j>=0;j--)
	  	    number[j]='\0';
	  	    n=0;
		  }
	    }
	    
      }
      
	}
	printf("\n");
  
  return 0;
  }
