#include <stdio.h>

  int main(){
  	int M,S,T;
  	while(scanf("%d %d %d", &M, &S, &T)!= EOF)
  	{
  	  int time = 1, run_dis = 0, b_dis = 0;
	  
	  for(time = 1; time <= T; time++)
	  {
	  	run_dis += 17;
	  	
	  	if(M < 10)
	  	  M+=4;
	  	else
	  	{
	  	  M -=10;
		  b_dis += 60;	
	    }
	    
	    if(run_dis < b_dis)
	      run_dis = b_dis;
	      
	    if(run_dis >= S)
	      break;
	  }
	  
	  if(time <= T)
	    printf("Yes\n%d\n", time);
	  else
	    printf("No\n%d\n", run_dis);
	  	
	
	}
  	
  return 0;	
  }
