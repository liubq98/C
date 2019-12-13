#include <stdio.h>

void sort1(int array[], int position);

void sort2(int array[], int position);

int n;

int main(){
	int i;
	int array[8] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}
	
	sort1(array, 0);

return 0;
}

void sort1(int array[], int position){
	int i;
	for(i = 0; i < n- 1; i++)
	{
		printf("%d ",array[i]);
	}
	printf("%d\n", array[n - 1]);
	
	for(i = n -2; i > position - 1; i--)
	{
		sort2(array, i);
	}
}

void sort2(int array[], int position){
	int i, j, k;
	int array2[8] = {0};
	for(i = position + 1; i < n; i++)
	{
		if((array[i] > array[position])&&(array[i] != array[i - 1]))
		{
			for(j = 0; j < n; j++)
			  array2[j] = array[j];
			
			for(k = i; k >position; k--)
			{
				int temp = array2[k];
				array2[k] = array2[k - 1];
				array2[k - 1] = temp;
			}
			
			sort1(array2, position +1);
		}
	}
}
