#include <stdio.h>
#include <string.h>

  int main(){
  	char str1[50],str2[50];
  	int i,j,length1,length2;
  	int time=0;
  	scanf("%s %s",str1,str2);
  	
  	length1=strlen(str1);
  	length2=strlen(str2);
  	
  	if(length1!=length2)
  	  printf("NO\n");
  	else
  	{
  	  for(i=0;i<length1;i++)
	  {
	    for(j=0;j<length1;j++)
		{
		  if(str1[i]==str2[j])
		    break;
		  time++;
		}
		if(time==length1)
		{
		  printf("NO\n");
		  return 1;	
		}
		else
		  time=0;	
	  }
	  printf("YES\n");	
	}
  	
  	return 0;
  } 
