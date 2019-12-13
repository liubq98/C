#include <stdio.h>  
  
//printArray打印出数组  
void printArray(int a[],int size){    
 //   printf("数组为：[%d] ",a[0]);    
    for (int i=0;i<size;i++)    
    {    
        printf(" %x ",a[i]);    
    }    
    printf("\n");    
}  
  
int main()  
{  
   int  a[6] ={ 6, 2, 4, 1, 5, 9 };  
   int  len=6;  
    //分配空桶  
   int  bucket[10]={0} ;  
   printf("排序前：");  
   printArray(a,len);  
    //直接以每个待排数字为索引,将自己的值赋值给当前桶  
   for (int i = 0; i < len; i++) {  
          bucket[a[i]] = a[i];  
    }  
    //跳过值为0的空桶,顺序输出即可  
    int temp=0;  
    for (int j = 0; j < 10; j++){  
        if (bucket[j] > 0)  
            a[temp++]=bucket[j];  
     }  
    printf("排序后：");  
    printArray(a,len);  
}  
