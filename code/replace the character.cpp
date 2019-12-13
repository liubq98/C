#include <stdio.h>
#include <string.h>

  int main(){
  	int N,i,j,length;
  	char str1[1000]={0};
  	char str2[1000]={0};
  	char letter1[100]={0};
  	char letter2[100]={0};
  	
  	scanf("%d",&N);
  	
  	for(i=0;i<N;i++)
  	{
  	  scanf("\n%c",&letter1[i]);
  	  scanf(" %c",&letter2[i]);
	}
	scanf("%s",str1);
	
	length=strlen(str1);
	for(i=0;i<length;i++)
	{
	  for(j=0;j<N;j++)
	  {
	  	if(str1[i]==letter2[j])
	  	{
	  	str1[i]=letter1[j];
	  	break;
	  	} 
	  }
	  
	  str2[i]=str1[i];
	}
	printf("%s\n",str2);
  	
  	return 0;
  } 
