#include <stdio.h>
#include<stdlib.h>
  
  int main(){
  	int T,N;
  	scanf("%d\n",&T);
  	int i,j;
  	int max1=0;
  	int max2=0;
  	for(i=0;i<T;i++)
  	{
  	  scanf("%d",N);
  	  for(j=0;j<N;j++){
  	  	 unsigned int random=rand()%(10000-2+1)+2;
  	  	    max1=random;
  	  	 if(max2<random){
  	  	 	max2=random;
  	  	 	if (max1 < max2){                
                int temp = max2;
                max2 = max1;
                max1 = temp;
                printf("%d\n",max2);
			 }
		}
  	}
  	return 0;
  }
}
