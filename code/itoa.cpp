#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  int main(){
  	int n,length,i;
  	n=123456;
  	char b[100];
  	itoa(n,b,10);
  	length=strlen(b);
  	for(i=0;i<length;i++)
  	printf("%c ",b[i]);
  	return 0;
  }
