#include"stack.h"

LinkStack* InitStack() {
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->next = NULL;
	return t;
}

int Empty(LinkStack *s) {
	return s->next == NULL;
}

void Push(LinkStack *s, dataType x) {
	node *t = (node*)malloc(sizeof(node));
	t->data = x;
	t->next = s->next;
	s->next = t;
}

void Pop(LinkStack *s) {
	if (Empty(s)) exit(1);
	node *p = s->next;
	s->next = p->next;
	free(p);
}

dataType GetTop(LinkStack *s) {
	return s->next->data;
}
