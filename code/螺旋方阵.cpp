#include <stdio.h>

  int main(){
  	int number,i,j,num=0;
  	int a,b,c,d;
  	int a1=0,b1=0,c1=0,d1=0;
  	int fang[100][100];

  	scanf("%d",&number);
  	  
  	  for(a=0,b=number-1,c=0,d=number-1;a<=b;a++,b--,c++,d--)      //������ 
  	  {
  	  	c1=c; 
  	    while(c1<=d)               //������ 
		{
		  fang[a][c1]=++num;
		  c1++;	
		}	
		a1=a+1;
		while(a1<=b)              //���ϵ��� 
		{
		  fang[a1][d]=++num;
		  a1++;
		}
		  d1=d-1;
		while(d1>=c)                  //���ҵ��� 
		{
		  fang[b][d1]=++num;
		  d1--;
		}
		b1=b-1;
		while(b1>a)                  //���µ��� 
		{
		  fang[b1][c]=++num;
		  b1--;
		}
		
	  }
	  
	  for(i=0;i<number;i++)                //������� 
	  {
	  	for(j=0;j<number-1;j++)
	  	{
	  	  printf("%d ",fang[i][j]);
		}
	    printf("%d\n",fang[i][number-1]);
	  }
  	
  	return 0;
  } 
