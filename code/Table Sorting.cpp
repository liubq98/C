#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char gender;
	char name[7];
	int id;
	int sore;
};

void sort0(struct student per[], struct student per2[], int n);

void sort1(struct student per[], int n);

void sort2(struct student per[], int n);

void sort3(struct student per[], int n);

void sort4(struct student per[], int n);

void print(struct student per[], int n);

void sel(int act, int n, struct student per[], struct student per2[]);

void aha(struct student per[], struct student per2[],int n);

void woqu(struct student per[], struct student per2[],int n);

int main(){
	int n;
	scanf("%d", &n);
	struct student per[n];
	struct student per2[n];
	aha(per, per2, n);
	woqu(per, per2, n);
	int act;
	while(1)
	{
		scanf("%d", &act);
		sel(act,  n, per, per2);
	}
	
return 0;	
}

void sort0(struct student per[], struct student per2[], int n){
	for(int i = 0; i < n; i++)
	{
		per[i] = per2[i];
	}
}

void sort1(struct student per[], int n){
	struct student temp;
	for(int i = 0; i < n; i++)
	{
	    for(int j = 0; j < n - 1 -i; j++)
	    {
	    	if(per[j].gender == per[j + 1].gender)
	    	{
	    		if(per[j].id > per[j + 1].id)
	    		{
	    			temp = per[j];
					per[j] = per[j + 1];
					per[j + 1] = temp;
				}
			}
			else if(per[j].gender > per[j + 1].gender)
			{
				struct student temp = per[j];
				per[j] = per[j + 1];
				per[j + 1] = temp;
			}
		}
	}
}

void sort2(struct student per[], int n){
		int compare;
		struct student temp;
	for(int i = 0; i < n; i++)
	{
	    for(int j = 0; j < n - 1 -i; j++)
	    {
	    	compare = strncmp(per[j].name, per[j + 1].name, 6);
	    	if(compare == 0)
	    	{
	    		if(per[j].id < per[j + 1].id)
	    		{
	    			temp = per[j];
					per[j] = per[j + 1];
					per[j + 1] = temp;
				}
			}
			else if(compare > 0)
			{
				temp = per[j];
				per[j] = per[j + 1];
				per[j + 1] = temp;
			}
		}
	}
}

void sort3(struct student per[], int n){
	struct student temp;
	for(int i = 0; i < n; i++)
	{
	    for(int j = 0; j < n - 1 -i; j++)
	    {
	    	if(per[j].id > per[j + 1].id)
	    	{
	    		temp = per[j];
				per[j] = per[j + 1];
				per[j + 1] = temp;
			}
		}
	}
}

void sort4(struct student per[], int n){
	struct student temp;
	for(int i = 0; i < n; i++)
	{
	    for(int j = 0; j < n - 1 -i; j++)
	    {
	    	if(per[j].sore == per[j + 1].sore)
	    	{
	    		if(per[j].id > per[j + 1].id)
	    	    {
	    		    temp = per[j];
				    per[j] = per[j + 1];
				    per[j + 1] = temp;
			    }
			}
	    	else if(per[j].sore < per[j + 1].sore)
	    	{
	    		temp = per[j];
				per[j] = per[j + 1];
				per[j + 1] = temp;
			}
		}
	}
}

void print(struct student per[], int n){
	printf("Gender Name   Id       Score\n");
	
	for(int i= 0; i < n; i++)
	{
		if(per[i].sore == 100)
		{
			printf("%c      %s %d %d  \n", per[i].gender, per[i].name, per[i].id, per[i].sore);
		}
		else if(per[i].sore >= 10)
		{
		    printf("%c      %s %d %d   \n", per[i].gender, per[i].name, per[i].id, per[i].sore);
		}
		else
		{
		    printf("%c      %s %d %d    \n", per[i].gender, per[i].name, per[i].id, per[i].sore);
		}
	}
	printf("\n");
}

void sel(int act, int n, struct student per[], struct student per2[]){
	if(act == -1)
		{
			exit(1);
		}
	switch(act)
	{
		case 0:
		  sort0(per,per2, n);
		  break;
		case 1:
		  sort1(per, n);
		  break;
		case 2:
		  sort2(per, n);
		  break;
		case 3:
		  sort3(per, n);
		  break;
		default:
		  sort4(per, n);
	}
		
	print(per, n);

}

void aha(struct student per[], struct student per2[],int n){
	int i;
	for(i=0;i<n;i++)
	{
		for(int j=0;j<7;j++)
		{
			per[i].name[j]='\0';
			per2[i].name[j]='\0';
		}
		
	}
	for(i = 0; i < n; i++)
	{
		scanf("\n%c %s%d%d", &per[i].gender, &per[i].name, &per[i].id, &per[i].sore);
	}
	
}

void woqu(struct student per[], struct student per2[],int n){
	int i;
	for(i = 0; i < n; i++)
	{
		int length = strlen(per[i].name);
		for(int j = length; j < 6; j++)
		{
			per[i].name[j] = ' ';
		}
	}
	
	for(i = 0; i < n; i++)
	{
		per2[i] = per[i];
	}
}
