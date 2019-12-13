#include <stdio.h>
#include <stdlib.h>

void readMap(const size_t map_size);

void printMap(const size_t map_size);

char map[15][15] = {};

// position of the human
int human_x = 0, human_y = 0;

int main(){
	int n, j=0, flag=0;
	char dong;
	char huiche;
	scanf("%d", &n);
	scanf("%c", &huiche);
	readMap(n);
	//printMap(n);
	for(int i=0;i<n+2; i++)      //find the position of A
	    {
		  for(int j=0;j<n+2;j++)
		  {
			if(map[i][j]=='A')
			{
				human_x = i;
				human_y = j;
	            map[human_x][human_y]=' ';
			}
		  }
	    }

	while(scanf("%c",&dong) != EOF)
	{
		scanf("%c",&huiche);
	    
	    if(flag == 1)
	    {
	      flag++;	
		  goto p;
		}
        
        if(dong == 'a')         //left
	   {
		if(map[human_x][human_y - 1] == '*')
		{
			if(map[human_x][n] == '@')
			{
				human_y = n;
				flag = 1;
			}
			else if(map[human_x][n] == '#')
			{
				;
			}
			else if(map[human_x][n] == '$')
			{
				printf("Game Over!\n");
			    return 1;
			}
			else
			{
				human_y = n;
			}
		}
		else if(map[human_x][human_y - 1] == '#')
		{
		    ;
		}
		else if(map[human_x][human_y - 1] == '@')
		{
			human_y--;
		    flag = 1;
		}
		else if(map[human_x][human_y - 1] == '$')
		{
			printf("Game Over!\n");
			return 1;
		}
		else
		{
			human_y = human_y - 1;
		}
	  }
	
	if(dong == 'd')                      //right
	{
		if(map[human_x][human_y + 1] == '*')
		{
			if(map[human_x][1] == '@')
			{
				human_y = 1;
				flag = 1;
			}
			else if(map[human_x][1] == '#')
			{
				;
			}
			else if(map[human_x][1] == '$')
			{
				printf("Game Over!\n");
			    return 1;
			}
			else
			{
				human_y = 1;
			}
		}
		else if(map[human_x][human_y + 1] == '#')
		{
			;
		}
		else if(map[human_x][human_y + 1] == '@')
		{
			human_y++;
		    flag = 1;
		}
		else if(map[human_x][human_y + 1] == '$')
		{
			printf("Game Over!\n");
			return 1;
		}
		else
		{
			human_y = human_y + 1;
		}
	}
	
	if(dong == 's')                      //down
	{
		if(map[human_x + 1][human_y] == '*')
		{
			if(map[1][human_y] == '@')
			{
				human_x = 1;
				flag = 1;
			}
			else if(map[1][human_y] == '#')
			{
				;
			}
			else if(map[1][human_y] == '$')
			{
				printf("Game Over!\n");
			    return 1;
			}
			else
			{
				human_x = 1;
			}
		}
		else if(map[human_x + 1][human_y] == '#')
		{
			;
		}
		else if(map[human_x + 1][human_y] == '@')
		{
			human_x++;
		    flag = 1;
		}
		else if(map[human_x + 1][human_y] == '$')
		{
			printf("Game Over!\n");
			return 1;
		}
		else
		{
			human_x = human_x + 1;
		}
	}
	
	if(dong == 'w')                      //up
	{
		if(map[human_x - 1][human_y] == '*')
		{
			if(map[n][human_y] == '@')
			{
				human_x = n;
				flag = 1;
			}
			else if(map[n][human_y] == '#')
			{
				;
			}
			else if(map[n][human_y] == '$')
			{
				printf("Game Over!\n");
			    return 1;
			}
			else
			{
				human_x = n;
			}
		}
		else if(map[human_x - 1][human_y] == '#')
		{
			;
		}
		else if(map[human_x - 1][human_y] == '@')
		{
			human_x--; 
		    flag = 1;
		}
		else if(map[human_x - 1][human_y] == '$')
		{
			printf("Game Over!\n");
			return 1;
		}
		else
		{
			human_x = human_x - 1;
		}
	}
     p:
     printMap(n);
     if(flag==2)
       flag=0;
	}
	
return 0;
} 

void readMap(const size_t map_size){
	char huiche;
	for(int i = 0; i < map_size + 2; i++)
	{
		scanf("%[^\n]",map[i]);
		scanf("%c", &huiche);
	}
}

void printMap(const size_t map_size){
	if(map[human_x][human_y] == '@')
	{
	  map[human_x][human_y] = 'A';
	  
	  for(int i=0;i<map_size+2; i++)
	  {
		printf("%s\n",map[i]);
	  }
	  map[human_x][human_y] = '@';
	}
	else
	{
		map[human_x][human_y] = 'A';
		for(int i=0;i<map_size+2; i++)
	    {
		printf("%s\n",map[i]);
	    }
	    map[human_x][human_y] = ' ';
	}
	
}
