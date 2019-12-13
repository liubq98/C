#include <stdio.h>
#include <string.h>
#include <ctype.h>

  int main(){
  	int n,x,y,i,j,length1,length2;
  	char str1[100]={0};
  	char str2[100]={0};
  	
  	scanf("%s",str1);
  	scanf("%s",str2);
  	scanf("%d",&n);
  	scanf("%d %d",&x,&y);
  	
  	int ptr;
	ptr=strcmp(str1,str2);                  //1
    if(ptr>0)
    printf("%s > %s\n",str1,str2);
    if(ptr==0)
    printf("%s = %s\n",str1,str2);
    if(ptr<0)
    printf("%s < %s\n",str1,str2);
    
    length2=strlen(str2);                           //2
    if(length2<n)
    n=length2;
    strncat(str1,str2,n);
    for(i=x;i<=y;i++)
    {
      str1[i]=toupper(str1[i]);
	}
	length1=strlen(str1);
	printf("the length of \"%s\" is %d\n",str1,length1);
	
	strcpy(str2,str1);                             //3
	for(i=0;i<length1;i++)
	{
	  str2[i]=tolower(str2[i]);
	}
	printf("%s < %s\n",str1,str2);
	
	j=length1/2-10;                                 //4
	if(j>0)
	printf("%s\n",str1);
	else
	printf("%s\n",str2);
  	
  	return 0;
  }
