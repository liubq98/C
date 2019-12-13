#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  int main(){
  	int T,N,i,j,length,m;
  	char line[100]={0};
  	char line2[100]={0};
  	int b[10]={0};
  	
  	scanf("%d",&T);
  	
  	for(i=0;i<T;i++)
  	{
  	  scanf("%d",&N);
  	  for(j=1;j<=N;j++)
  	  {
	  	sprintf(line,"%d",j); 
        for(m=0;m<3;m++)
        {
          if(line[m]!='\0')
		  b[line[m]-'0']++;
		}
      	for(m=0;m<3;m++)
      	line[m]='\0';
	  }
      
      for(j=0;j<9;j++)
      printf("%d ",b[j]);
      
	  printf("%d\n",b[9]);
	
	for(m=0;m<10;m++)
	  b[m]=0;
	}
	
  	return 0;
  }
