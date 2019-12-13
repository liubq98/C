#include <stdio.h>
#include <string.h>

  int main(){
    int n,i=0,a,j,length,m=0;
    char number[100];
    int number1[100];
    int number2[100];
    scanf("%d",&n);
    
	for(i=0;i<n;i++)
    {
    scanf("%s",&number);

  
    length=strlen(number);

	if(length<2)
	printf("Yes\n");
	else
	{
	  a=length/2;

	  for(j=0;j<a;j++)
	  {
	    number1[j]=number[j]-'0';
	  }

	  for(j=length;j>a;j--)
	  { 
	    number2[m]=number[j-1]-'0';
	    m++;
	  }

	  for(j=0;j<a;j++)
	  {
            if(number1[j]!=number2[j])
              break;
	  }
	  if(j==a)
        printf("Yes\n");
	  else
	    printf("No\n");
	}
    }

  return 0;
  }
