#include <stdio.h>

  int main(){
  	int queue[11];
  	int rear=0,front=0,i=0;
  	int num,time1,time2;
  	
  	loop:
    while(scanf("%d",&num)!=EOF)
    {
 
  	  if(num==1)
		{
			time1=rear;
		  rear=(rear+1)%11;
		  scanf("%d",&queue[rear]);
		  
		  if(rear==front)
		  {
		    printf("Push Failed. The queue is full.\n");
		    rear=time1;
		  }
		  
		}
	  else 
	  {
	  	time2=front;
	  	if(front!=rear)
	  	{
	  	  front=(front+1)%11;
	      printf("%d\n",queue[front]);
	  	}
	    else
	    {
	      printf("Pop Failed. The queue is empty.\n");
	      front=time2;
		}    
	  
	}
	
	goto loop;
    }
  	
  	return 0;
  }
