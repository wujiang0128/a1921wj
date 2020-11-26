#ifndef sort.h
#define sort.h
#include<stdio.h>
#include<malloc.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
}LinkSort;

LinkSort*InitSort();
void Bubble1(DataList&L);
void Bubble2(DataList&L);
void Bubble3(DataList&L);
void InsetSort(DataList&L);
void SelectSort(DataList&L);

#endif
