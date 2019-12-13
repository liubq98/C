#include <stdio.h>
#include <string.h>

  int main(){
  	char a[400];
  	int length,number;
  	int i,max=0;
  	
  	scanf("%[^EOF]",&a);
    length=strlen(a);
    int word[27];
    for(i=0;i<27;i++)
      word[i]=0;
	
	if(((int)a[0]!=32)&&((int)a[0]!=10))        //单词 
	 word[26]=1;
	else
	 word[26]=0;
	 
	for(int k=0;k<length-1;k++){
		if((((int)a[k]==32)&&((int)a[k+1]!=32)&&((int)a[k+1]!=10))||(((int)a[k]==10)&&((int)a[k+1]!=10)&&((int)a[k+1]!=32)))
		word[26]++;
	}
  
    for(i=0;i<26;i++){                        //字母 
    	for(int j=0;j<length;j++){
    		number=(int)a[j];
    		int b;
    		b=i+97;
    		if(number==b)
    		word[i]++;
		}
	}
	
	for(i=0;i<27;i++){                //*行数 
		if(word[i]>max)
		max=word[i];
	}
    
    int h,w[27];
    h=max;
    for(i=0;i<27;i++)
      w[i]=word[i];
      
    for(i=0;i<max;i++){                 //*
    	printf("%d\t",h);
    	for(int m=0;m<27;m++){
    		if(word[m]>0){
    		  if(word[m]==h){
    			printf("*");
    			word[m]--;
			  }
			  else
			  printf(" ");
		    }   
		}
		printf("\n");
		h--;
	}
	
	printf(" \t");                //最下面 
	
	for(i=0;i<26;i++){
		if(w[i]!=0){
			char t;
			t=(char)(i+97);
		  printf("%c",t);
	    }
	}
    printf("W\n");
    

  	return 0;
  }
