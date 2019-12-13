#include <stdio.h>

  int main(){
  	int num11,num12,num21,num22;
  	int sum1,sum2,remainder,suma1,suma2;
  	int time,i;
  	scanf("%d",&time);
  	for(i=0;i<time;i++)
  	{
  	  scanf("%d %d\n%d %d",&num11,&num12,&num21,&num22);
  	  if((num12==0)||(num22==0))
  	  printf("Not A Number\n");
      else
  	  {
  	  	sum1=num11*num21;
  	  	sum2=num12*num22;
		if(sum1==0)
  	  	printf("0\n");
  	  	else
  	  	{
  	  	  suma1=sum1;
		  suma2=sum2;
		  while(suma2!=0)
		  {	
  	  	  remainder=suma1%suma2;
		  suma1=suma2;
		  suma2=remainder;
	      }
	      sum1=sum1/suma1;
	      sum2=sum2/suma1;
	      if(sum2==1)
	      printf("%d\n",sum1);
	      else
	      printf("%d/%d\n",sum1,sum2);
		}
	  }
    }  
  	return 0;
  } 
