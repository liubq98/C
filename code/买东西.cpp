#include <stdio.h>

  int main(){
  	int i,n,t,a;
  	int array[100];
  	  scanf("%d\n%d",&i,&n);
        int b,c;
        
  	  	for(c=0;c<n;c++){
  	  	scanf("%d",&array[c]);
	    }
		  for(b=0;;b++){
			scanf("%d",&t);
			
			if(t==10){
  	  	      printf("Ihen!\nBye.\n");
  	  	      break;
		    }
  	  
			if(t==-1){
				printf("Bye.\n");
				break;
			}
			else
			i=i-array[t];
			
			if(i<0){
			  printf("BAKA!\nBye.\n");
			  break;
			}
			
			else
			  printf("You have %d yen now.\n",i);
		}
	
	return 0;	
  }
