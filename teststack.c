#include"stack.h"
int main() {
	LinkStack *s = IniStack();
	Push(s,80);
	Push(s,90);
	Pop(s);
	Push(s,70);
	printf("%d", GetTop(s));

