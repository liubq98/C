#include <stdio.h>
#include <stdlib.h>

#define MAX_TOTAL 10
#define MAX_SIZE 4

void inputMatrices(int (*)[MAX_SIZE], int size);

void printMatrices(int (*)[MAX_SIZE], int size);

int cmpMatrices(const void *firstMatrixPtr, const void *secondMatrixPtr, void *sizePtr);

int main() {
  size_t total = 0, size = 0;
  scanf("%zu%zu", &total, &size);
  int matrixArr[MAX_TOTAL][MAX_SIZE][MAX_SIZE] = {0};
  for (size_t matrixIndex = 0; matrixIndex < total; ++matrixIndex) {
    inputMatrices(matrixArr[matrixIndex], size);
  }
  qsort_r(matrixArr, total, sizeof(matrixArr[0]), &cmpMatrices, &size);
  for (size_t matrixIndex = 0; matrixIndex < total; ++matrixIndex) {
    printMatrices(matrixArr[matrixIndex], size);
  }
  return 0;
}

void inputMatrices(int (*matrixArr)[MAX_SIZE], int size){
	int i, j;
	for(i = 0; i < size; i++)
	{
	  for(j = 0; j < size; j++)
	  {
	  	scanf("%d", (*(matrixArr + i)+j));
	  }
	 
	}
}

void printMatrices(int (*matrixArr)[MAX_SIZE], int size){
	int i, j;
	for(i = 0; i < size; i++)
	{
	  for(j = 0; j < size-1; j++)
	  {
	  	printf("%d ", *(*(matrixArr + i)+j));
	  }
	    	    
	  printf("%d\n", *(*(matrixArr + i) + (size - 1)));
	}
	printf("\n");
}

int cmpMatrices(const void *firstMatrixPtr, const void *secondMatrixPtr, void *sizePtr){
	int i, j,size1 = 0, size2 = 0;
	size_t *matrixSizePtr = (size_t *)sizePtr;
    size_t matrixSize = *matrixSizePtr;
    
    int *firstMatrixPtr2 = (int *)firstMatrixPtr;
    
    int *secondMatrixPtr2 = (int *)secondMatrixPtr;
	
	for(i=0,j=0;i<matrixSize,j<matrixSize;i++,j++)
	{
	  size1 += *(firstMatrixPtr2 + (i * 4) + j);
	  size2 += *(secondMatrixPtr2 + (i * 4) + j);
	}
	
	for(i=0,j=matrixSize-1;i<matrixSize,j>=0;i++,j--)
	{
	  if(i != j)
	  {
	  	size1 += *(firstMatrixPtr2 + (i * 4) + j);
	    size2 += *(secondMatrixPtr2 + (i * 4) + j);
	  }
	}
	
	j = size1 - size2;
	return j;
}
