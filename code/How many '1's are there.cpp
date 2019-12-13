 #include <stdio.h>

  int main(){
    int n, m, i,sum=0;
    scanf("%d",&n);
    
    for(i = 0; i < n; i++)
    {
      scanf("%d",&m);
      while(m!=0)
      {
        if(m%2==1)
          sum++;
        m=m/2;
        
      }
      printf("%d\n",sum);
      sum=0;
    } 
  
  return 0;
  }
