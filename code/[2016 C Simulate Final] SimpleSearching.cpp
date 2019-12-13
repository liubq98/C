#include <stdio.h>
#include <string.h>


int main(){
	int i, j,n,m,k;
	char str[100] = {0};
	char ch;
    scanf("%s", str);
    ch = getchar();
	int len;
	len = strlen(str);
	int temp = 1;
	for(i = 0; i < len; i++)
	{
		if(str[i] == '*')
		{
			temp++;
		}
		else
		{
			if(temp%2 == 0)
			{
				if(str[i]>='A' && str[i] <= 'Z')
				{
					str[i] = str[i] + 32;
				}
			}
			else
			{
				if(str[i]>='a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	for(i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
	
return 0;		
} 

