#include <stdio.h>

  int main(){
  	int year,month;
  	scanf("%d %d",&year,&month);
  	if((year>9999)||(month>12)||(year<0)||(month<1))
  	  printf("Invalid Input Detected.\n");
  	else{
  		int a,b;
  		a=year;
  	    b=month;
  	if(b!=2){
  	switch(b){
  		case 1:
  		case 3:
  		case 5:
  		case 7:
  		case 8:
  		case 10:
  		case 12:
  			printf("%04d/%02d has 31 days.\n",year,month);
  			break;
  		case 4:
  		case 6:
  		case 9:
  		case 11:
  			printf("%04d/%02d has 30 days.\n",year,month);
  			break;
  		}
  		 }
  		 else{
	  if (a%100==0){
  		if (a%400==0)
  	    b=13;
  	    else
  	    b=2;
  	    }
  	    else{
  		if (a%4==0)
  		b=13;
  		else
  	    b=2;
  	    }
  	    switch(b){
  	    case 2:
  			printf("%04d/%02d has 28 days.\n",year,month);
  			break;
  		case 13:
  			printf("%04d/%02d has 29 days.\n",year,month);
  			break;
  		}
  		}
	  }
	  return 0;
  } 
