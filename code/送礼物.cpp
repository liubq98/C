#include <stdio.h>

  int main(){
    int Number,active,max=0,j=0,i=0,n=0;
    char name1[100][30];
    char name2[30];
    scanf("%d",&Number);
   
    for(i=0;i<Number;i++)
    {
      scanf("%d",&active);
      
      if(active==1)
      {
      	max+=1;
        scanf("%s",name1[max]);
      }
      
      else
      {
      	scanf("%s",name2);
        printf("%s %s\n",name2,name1[max]);
        max--;
	  }

    }

  return 0;
  }
