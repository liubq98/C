#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h> 

  int main(){
  	int nnn,iii,huan,jjj=0,r_number;
  	int num[10]={0};
  	int num1[10]={0},num2[10]={0};
  	unsigned seed = (unsigned)time(0);
   	scanf("%d",&nnn);

  	for(iii=0;iii<nnn;iii++)
  	{
	  scanf("%d",&num[iii]);
	}
  	scanf("%u",&seed);
  	srand(seed);
  	memcpy(num2,num,sizeof(num));
  	loop:
  	memcpy(num,num2,sizeof(num2));

  	for(iii=nnn-1;iii>0;iii--)
  	{
  		r_number=rand()%(iii+1);
  		huan=num[r_number];
  		num[r_number]=num[iii];
  		num[iii]=huan;
	  }
	printf("{");
	for(iii=0;iii<nnn-1;iii++)
	{
      printf("%d, ",num[iii]);
	}
	printf("%d}\n",num[nnn-1]);
	jjj++;
	
	if(jjj==1)
	goto loop;
	return 0;
  } 
