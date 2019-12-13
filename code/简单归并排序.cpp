#include <stdio.h>
  int n;

  void hebing(int array[],int first, int mid, int last, int temp[]);
  
  void sort(int array[], int first, int last, int temp[]);
  
  int main(){
  	int i;
  	int array[100]={0},temp[100]={0};
  	
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  	{
  	  scanf("%d",&array[i]);	
	}
	
	sort(array,0,n-1,temp);
	
	return 0;
  }
  
  void hebing(int array[],int first, int mid, int last, int temp[]){
  	int k=first,j=mid+1,m=0;
  	while((k<=mid)&&(j<=last))
  	{
  	  if(array[k]<array[j])
		temp[m++]=array[k++];
	  else
	    temp[m++]=array[j++];	
	}
	while(k<=mid)
	  temp[m++]=array[k++];
	while(j<=last)
	  temp[m++]=array[j++];
	  
	for(k=0;k<m;k++)
	array[first+k]=temp[k];
	
	for(k=0;k<n-1;k++)
	printf("%d ",array[k]);
	printf("%d\n",array[n-1]);
  }
  
  void sort(int array[], int first, int last, int temp[]){
  	if(first<last)
  	{
  	  int mid=(first+last)/2;
	  sort(array,first,mid,temp);
	  sort(array,mid+1,last,temp);
	  hebing(array,first,mid,last,temp);	
	}
  	
  }
