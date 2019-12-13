#include <stdio.h>

  int main(){
  	int n,m,i;
  	scanf("%d %d",&n,&m);
  	for(n;n<=m;n++){
  		for(i=2;i<n;i++){
  			if(n%i==0){
  				break;
			  }
			}
			if(i==n){
				printf("%d\n",n);
				return 1;
			}
	  }
	  printf("none\n");
	  return 0;
  } 
