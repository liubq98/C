#include <stdio.h>

  int main(){
  	int T,N;
  	scanf("%d\n",&T);
  	int i,j,n;
  	for(i=0;i<T;i++){
  		scanf("%d\n",&N);
  		int yongli[N];
  		for(j=0;j<N;j++){
  			scanf("%d",&yongli[j+1]);
		  }
		  int max2,a=1;
		    max2=yongli[1];
		    for(j=2;j<=N;j++){
		    	if(yongli[j]>max2){
		    	max2=yongli[j];
		    	a=j;
				}
			}
		    yongli[a]=0;
		    max2=yongli[1];
		    for(j=2;j<=N;j++){
		    	if(yongli[j]>max2){
		    		max2=yongli[j];
				}
			}
             printf("%d\n",max2);
			}
	return 0;
  }
