#include <stdio.h>

  int main(){
  	int a=0,b=0;
  	scanf("%d",&a);
  	if(a==1)
  	printf("No\n");
  	else
  	{
  	for(int i=2;i<a;i++)
  	{
  		if(a%i==0)
  		b++;
	  }
	  if(b==0)
	  printf("Yes\n");
	  else
	  printf("No\n");
    }
	  return 0;
  }
