#include <stdio.h>
#include <string.h>

int main(){
	float a = (float)0.15;
	float b = (float)0.45/3;
	if(a > b)
	{
		printf("%f %f\n", a, b);
	}
	else if(a == b)
	{
		printf("a = b");
	}
	else
	{
		printf("a");
	}

return 0;
}
