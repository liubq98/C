#include <stdio.h>  
  
//printArray��ӡ������  
void printArray(int a[],int size){    
 //   printf("����Ϊ��[%d] ",a[0]);    
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
    //�����Ͱ  
   int  bucket[10]={0} ;  
   printf("����ǰ��");  
   printArray(a,len);  
    //ֱ����ÿ����������Ϊ����,���Լ���ֵ��ֵ����ǰͰ  
   for (int i = 0; i < len; i++) {  
          bucket[a[i]] = a[i];  
    }  
    //����ֵΪ0�Ŀ�Ͱ,˳���������  
    int temp=0;  
    for (int j = 0; j < 10; j++){  
        if (bucket[j] > 0)  
            a[temp++]=bucket[j];  
     }  
    printf("�����");  
    printArray(a,len);  
}  
