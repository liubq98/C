#include <stdio.h>

  int main(){
  	int N;
  	float M,k;
  	scanf("%d %.1f",&N,&M);
  	for(int i=2;i<=N;i++){
  		for(int j=1;j<i;j++){
  			printf("%d/%d\n",j,i);

  			k=(float)j/i;
  			if(k>=M)
  			break;
		  }
	  }
	  return 0;
  }
