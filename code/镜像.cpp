#include <stdio.h>
#include <string.h>

  int main(){
  	int N,M,length;
  	char array[100]={0};
  	char array2[100]={0};
  	int i_loop,j_loop;
  	
  	scanf("%d %d",&N,&M);
  	
  	for(i_loop=0;i_loop<N;i_loop++)
  	{
  	  scanf("%s",array);
	  length=strlen(array);
	  
	  for(j_loop=0;j_loop<length;j_loop++)
	  {
	  	if(array[length-j_loop-1]=='b')
	  	array[length-j_loop-1]='d';
	  	else if(array[length-j_loop-1]=='d')
	  	array[length-j_loop-1]='b';
	  	array2[j_loop]=array[length-j_loop-1];
	  }
	  printf("%s\n",array2);
	}
  	
  	return 0;
  }
