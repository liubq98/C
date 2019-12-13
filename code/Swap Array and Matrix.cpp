#include <stdio.h>

  void swapArray(int len, int arr1[len], int arr2[len])
  {
    int arr3[len];
    int i,j;
    for(i=0;i<len;i++)
    {
      arr3[i]=arr1[i];
      arr1[i]=arr2[i];
      arr2[i]=arr3[i];
    }
  }
    
  void swapMatrix(int len, int mat1[len][len], int mat2[len][len]){
    int i,j;
    int mat3[len][len];
    for(i=0;i<len;i++)
    {
      for(j=0;j<len;j++)
      {
        mat3[i][j]=mat1[i][j];
        mat1[i][j]=mat2[i][j];
        mat2[i][j]=mat3[i][j];
      }
    }

  }
