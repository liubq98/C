#include <stdio.h>

  int main(){
    int a[100000];
    int n,num=0,i,t,j;
    int k=0;
     scanf("%d",&n); 
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    	num=num+a[i];
	}
	if(num==0){
	printf("no such number\n");
	return 1;
    }
    
	if(num%3==0){
    	for(k=0;k<n;k++){
    	if(a[k]==0){
          int b[10];
		  for(i=0;i<10;i++)
		  	b[i]=0;
		  for(t=0;t<n;t++)
		    b[a[t]]++;
		  for(i=9;i>=0;i--){
		  
		  for(j=1;j<=b[i];j++)
		    printf("%d",i);
		}
		    printf("\n");
            break;
         }
 }
        if(k==n)
     	printf("no such number\n");
     
    }
     
        else
		printf("no such number\n");

      return 0;
}
