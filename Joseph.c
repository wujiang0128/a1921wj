#include <stdio.h>
#include <malloc.h>

#define n 11
#define m 3

typedef struct node {
	int no;
	struct node *next;
}node;

int main() {
	int k = 0;
	node *p, *q, *r;
	p = q = (node*)malloc(sizeof(node));   //创建第一个节点
	p -> no = 1;
	for (int i=2; i<=n; i++) {             //建立链表
		r = (node*)malloc(sizeof(node));
		r->no = i;
		q->next = r;
		q = r;
	}
	q->next = p;                           //构成一个环

	q = p;
	while (q->next != q) {
	k++;
	if (k == m) {
	p->next = q->next;
	free(q);
	q = p ->next;
	k = 0;
	}else{
	p = q;
	q = q->next;
	}
	}
	printf("最后一个获胜者的编号是: %d\n", q->no);
}
