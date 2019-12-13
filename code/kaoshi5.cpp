#include <stdio.h>
#include <string.h>

  int main(){
  	char a[100];
  	scanf("%s",a);
  	int b,j,num=0;
  	b=strlen(a);
  	printf("%d ",b);
  	for(int i=0;i<b;i++){
  	  j=a[i]-'0';
  	  num=num+j;
      }
      printf("%d\n",num);
      return 0;
  }
