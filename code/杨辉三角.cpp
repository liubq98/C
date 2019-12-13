#include <stdio.h>

  int main(){
  	int R,i,j;
  	int array[100][100]; 
  	scanf("%d",&R);
  	int k,x;

  	
  	for(i=1;i<=R;i++){
  		  	k=R-i;
        	x=k+1;
  		for(j=1;j<=R;j++){
            if(j<=k)
            printf(" ");
            else{
            	
            	  
            	  if((j==x)||(j==R))
            	    array[i][j]=1;
            	    else
            	      array[i][j]=array[i-1][j]+array[i-1][j+1];
                
				if(j!=R)     
				printf("%d ",array[i][j]);
				else
				printf("%d",array[i][j]);
			}
	        	
		  }
		  printf("\n");
	  }
	  return 0;
  }
