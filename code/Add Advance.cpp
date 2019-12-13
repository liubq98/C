#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(char num1[], char num2[], char sum[]) {
  int length1 = strlen(num1), length2 = strlen(num2);
  int i;
  if (length1 < length2) 
  {
    add(num2, num1, sum);
    return;
  }
  int diff = length1 - length2;
  sum[0] = sum[length1 + 1] = 0;
  for (i = 1; i <= length2; ++i) 
  {
    sum[length1 - i + 1] = (num1[length1 - i] - '0') + (num2[length2 - i] - '0');
  }
  for (i = 0; i < diff; ++i) 
  {
    sum[i + 1] = num1[i] - '0';
  }
  for (i = length1; i > 0; --i) 
  {
    if (sum[i] > 9) 
	{
      sum[i - 1] += sum[i] / 10;
      sum[i] %= 10;
    }
    sum[i] += '0';
  }
  if (!sum[0]) 
  {
    for (i = 0; i < length1; ++i) 
	{
      sum[i] = sum[i + 1];
    }
    sum[length1] = 0;
  } 
  else 
  {
    sum[0] += '0';
  }
}
char* addTripleNum(char num1[], char num2[], char num3[]){
	char *sum1;
	sum1 = (char *)malloc(31);
	char *sum2;
	sum2 = (char *)malloc(31);
	
	add(num1, num2, sum1);
	add(num3, sum1, sum2);
	
	free(sum1);
	
  return sum2;
}

void freeSum(void* sumPtr){
	free(sumPtr);
}

int main() {
  char left[30] = {}, mid[30] = {}, right[30] = {};
  scanf("%s %s %s", left, mid, right);
  char *sum = addTripleNum(left, mid, right);
  printf("%s + %s + %s = %s\n", left, mid, right, sum);
  freeSum(sum);
  return 0;
}
