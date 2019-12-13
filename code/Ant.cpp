#include <stdio.h>

  int main(){
    int N,L,i,dis,max=0;
    char fang;
    scanf("%d %d",&N,&L);
    for(i=0;i<N;i++)
    {
      char j = getchar();
      scanf("%c",&fang);
      j = getchar();
      scanf("%d", &dis);
      if(fang=='R')
        dis=L-dis;
      if(dis>max)
        max=dis;
    }
    printf("%d\n",max);

  return 0;
  }
