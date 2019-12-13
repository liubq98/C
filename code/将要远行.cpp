#include <stdio.h>
#include <string.h>

  int main(){
    char a[100];
    int i=0,n=0,num=0,m=0;
      scanf("%s",a);
      m=strlen(a);
       
      for(i=m-1;i>=0;i--){
        n=a[i]-'0';
        num+=n;
	  }
	  
	  if(num%3==0)
	    printf("God\n");
	  else
	    printf("Issac\n");
        
  return 0;
  }
