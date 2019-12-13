#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h> 
    
  void sh(int num1[],int n);
   int main(){
  	int n,i;
  	int num[10]={0};
  	int num1[10]={0},num2[10]={0};
  	unsigned seed = (unsigned)time(0);
    int r_number;
  	
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  	{
	  scanf("%d",&num[i]);
	}
  	scanf("%u",&seed);
  	srand(seed);
  	
  	void sh(num1,num,n);
  	void sh(num2,num,n);
  	
  	return 0;
  } 
  void sh(int num1[],int num[],int n)
    {
      int N,r_number,i,size;
   	  n=N;
   	  int num[10]; 
  	  while(n>1)                   //µÚÒ»ÐÐ 
  	  {
  	    size=n-1;
  	    r_number=rand()%size;
  	    for(i=0;i<n-1;i++)
  	    {
	      if(i==r_number)
  	      {
		    num1[i]=num[n-1];
		    num1[n-1]=num[i];	
          }
          else
            num1[i]=num[i];
        }
        memcpy(num,num1,sizeof num1);
        n--;
	   }
	 	printf("{");
	  for(i=0;i<N-1;i++)
	  {
        printf("%d, ",num1[i]);
	  }
	  printf("%d}\n",num1[N-1]); 
   }
