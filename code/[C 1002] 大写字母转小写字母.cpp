#include <stdio.h>

  int main(){
  	char a;
  	scanf("%c",&a);
  	if(a>='A'&&a<='Z')
  	a=a+32;
  	printf("%c\n",a);
  	return 0;
  }
