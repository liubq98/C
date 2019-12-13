#include <stdio.h>
#include "stack.h" 

void pop(Stack *s){
	Node *p = (*s).top;
	(*s).top = (*s).top->next;
	(*s).size--;
	free(p);
}

int top(Stack *s){
	return (*s).top->data;
}

void push(Stack *s, int i){
	(*s).top = createNode(i, (*s).top);
	(*s).size++;
}

int size(Stack *s){
	return (*s).size;
}

int empty(Stack *s){
	return ((*s).size == 0);
}
