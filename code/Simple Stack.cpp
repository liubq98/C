#include <stdio.h>
#include <stdlib.h>

#define str(a) #a
#define pushFormat "push %d into %s: %s\n"

#ifndef STACK_H
#define STACK_H
#define STACK_MAX_SIZE 6

int stack_push(int *stack, int num);

int stack_pop(int *stack);

int stack_top(int *stack, int *ret);

int *stack_constructor(void);

void stack_destructor(int *stack);

#endif

int main() {
  int *stack_1 = stack_constructor();
  int *stack_2 = stack_constructor();
  int times = 0, temp = 0;
  scanf("%d", &times);
  for (int i = 0; i < times; ++i) {
    scanf("%d", &temp);
    printf(pushFormat, temp, str(stack_1),
           stack_push(stack_1, temp) ? str(success) : str(failed));
  }
  scanf("%d", &times);
  for (int i = 0; i < times; ++i) {
    int num = 0;
    int flag = stack_top(stack_1, &num);
    printf("get the top from stack_1: %s\n", flag ? str(success) : str(failed));
    if (flag) {
      printf("The top: %d\n", num);
      stack_pop(stack_1);
    } else {
      puts("The top: None");
    }
    flag = stack_push(stack_2, num);
    printf(pushFormat, num, str(stack_2), flag ? str(success) : str(failed));
    flag = stack_push(stack_2, num + 1);
    printf(pushFormat, num + 1, str(stack_2), flag ? str(success) : str(failed));
  }

  int num = 0;
  printf("The num in stack_1:");
  while (stack_top(stack_1, &num)) {
    printf(" %d", num);
    stack_pop(stack_1);
  }
  printf("\nThe num in stack_2:");
  while (stack_top(stack_2, &num)) {
    printf(" %d", num);
    stack_pop(stack_2);
  }
  putchar('\n');
  stack_destructor(stack_1);
  stack_destructor(stack_2);
  return 0;
}


int stack_push(int *stack, int num){
	static int index = 1;
	if((stack[0]) == 0)
	  index = 0;
	index++;
	stack[index] = num;
	if(index <= STACK_MAX_SIZE)
	{
	  stack[0]++;
	  return 1;
	}
	else
	  return 0;
}
 
int stack_pop(int *stack){
	if((stack[0]) != 0)
	{
	  stack[0]--;
	}
	else
	return 0;
}

int stack_top(int *stack, int *ret){
	if((stack[0]) == 0)
	  return 0;
	else
	{
	  *ret = stack[stack[0]];
	}
	
}

int *stack_constructor(void){
	int *stack = (int *)calloc(50,sizeof(int));
    return stack;

}

void stack_destructor(int *stack){
	free(stack);
	
}  
