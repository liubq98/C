#include <stdio.h>
  int main(){
  	int a,b;
  	scanf("%d %d",&a,&b);
  	int i,n;
  	if(a>b)
  	n=b;
  	else
  	n=a;
  	for(i=n;i>=1;i--)
  	{
  	  if((a%i==0)&&(b%i==0))
  	  {
  	  printf("%d\n",i);
  	  break;
      }
  	}
  }
