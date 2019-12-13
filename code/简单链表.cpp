#include <stdio.h>
#include <stdlib.h>

node *getnode(int position){
	node *temp = head;
	int i;
	for(i = 0;i < position - 1;i++)
	{
		if(temp != NULL)
		  temp = temp->next;
	}
return temp;
}

bool insert(int position, int value){
	if((position < 0)||(position > size))
	{
		return false;
	}
	else
	{
		if(position == 0)
		{
			if(size == 0)
			{
			    node *temp = (int *)malloc(sizeof(node));
			    temp->value = value;
			    temp->next = NULL;
			    head = temp;
			}
			else
			{
				node *temp = (int *)malloc(sizeof(node));
			    temp->value = value;
			    temp->next = head;
			    head = temp;
			}
			size++;
		}
		else
		{
			node *temp = (node *)malloc(sizeof(node));
			temp->value = value;
			node *pre = getnode(position);
			temp->next = pre->next;
			pre->next = temp;
			
			size++;
		}
	
	return true;
	}
}


int get(int position){
	node *temp = head;
	int i;
	for(i = 0;i < size;i++)
	{
		if(position == 0)
		{
			return temp->value;
		}
		else
		{
			temp = temp->next;
		    if(i == position - 1)
		    {
			    return temp->value;
		    }
		}		  
	}
}

void clear(){
	node *temp;
	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
