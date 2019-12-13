#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h> 

  int main(){
  	int n,i,j,size;
  	int num[10]={0};
  	int num1[10]={0},num2[10]={0},dest[10]={0};
  	unsigned seed = (unsigned)time(0);
    int r_number;
    
  	scanf("%d",&n);
  	int N;
  	N=n;
  	for(i=0;i<N;i++)
  	{
	  scanf("%d",&num[i]);
	}
  	scanf("%u",&seed);
  	 srand(seed);
  	
  	memcpy(dest,num,sizeof num);
  	
  	while(n>1)                   //第一行 
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
	
	j=N;
	while(N>1)                 //第二行 
  	{
  	  size=N-1;
  	  r_number=rand()%size;
  	  
  	  for(i=0;i<N-1;i++)
  	  {
	    if(i==r_number)
  	    {
		  num2[i]=dest[N-1];
		  num2[N-1]=dest[i];	
        }
        else
          num2[i]=dest[i];
      }
      memcpy(dest,num2,sizeof num2);
      N--;
	}
	
	printf("{");
	for(i=0;i<j-1;i++)
	{
      printf("%d, ",num2[i]);
	}
	printf("%d}\n",num2[j-1]);
	
  	
  	return 0;
  } 
