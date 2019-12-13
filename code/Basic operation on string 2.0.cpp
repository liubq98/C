#include <stdio.h>
#include <string.h> 

int split(char ret[][100], const char str[], const char del);

void lstrip(char str[], const char del);

void rstrip(char str[], const char del);

void strip(char str[], const char del);

  int main(){
    char str1[100]={0},str2[100]={0},str3[100]={0};
    char del1,del2,del3;
    char ret[100][100]={0};
    
    scanf("%s\n", str1);
    scanf("%c\n",&del1);
    split(ret,str1,del1);
   
    fflush(stdin);
    fgets(str2,100,stdin);
    str2[strlen(str2) - 1] = 0;
    scanf("%c\n",&del2);
    lstrip(str2,del2);
	   rstrip(str2,del2);

    fflush(stdin);
    fgets(str3,100,stdin);
    str3[strlen(str3) - 1] = 0;
    scanf("%c",&del3);
    strip(str3,del3);

  return 0;
  }

int split(char ret[][100], const char str[], const char del){
  int length,i,j=0,k=0;
  length=strlen(str);
  for(i=0;i<length;i++)
  {
    if(str[i]==del)
    {
      j++;
      k=0;
    }
    else
    {
      ret[j][k]=str[i];
      k++;
    }
  }
 
  for(i=0;i<=j;i++)
  {
  	printf("%s", ret[i]);
  	printf("\n");
  }
  return 0;
}

void lstrip(char str[], const char del){
	int length,i,j;
	length=strlen(str);
	for(i=0;i<length;i++)
	{
	  if(str[i]!=del)
	  break;
	} 
	for(j=i;j<length;j++)
	  printf("%c",str[j]);
	  
	printf("\n");
}

void rstrip(char str[], const char del){
	int length,i,j,k=0;
	length=strlen(str);
	for(i=0;i<length;i++)
	{
	  if(str[i]!=del)
	  {
	  	for(j=i;j<length;j++)
	  	{
	  	  if((str[j]==del)&&(str[j+1]==del)||(j==length-1))
			break;
		  else
		   printf("%c",str[j]);
		}	
	    printf("\n");
		break;
	  }
	}
}

void strip(char str[], const char del){
	int length,i,j,k=0;
	length=strlen(str);
	for(i=0;i<length;i++)
	{
	  if(str[i]!=del)
	  {
	  	for(j=i;j<length;j++)
	  	{
	  	  if((str[j]==del)&&(str[j+1]==del)||((str[length-1]==del)&&(j==length-1)))
			break;
		  else
		   printf("%c",str[j]);
		}	
	    printf("\n");
		break;
	  }
	}
}
