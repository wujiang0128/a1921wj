#ifndef stack.h
#define stack.h
#include<stdio.h>
#include<mallic.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
}LinkStack;

LinkStack*InitStack();
int Empty(LinkStack *s);
void Push(LinkStack *s,dataType x);
void Pop(LinkStack *s);
dataType GetTop(LinkStack *s);

#endif
