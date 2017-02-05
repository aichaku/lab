#include "linkedList.h"

LinkedList::LinkedList()
{
	head = NULL;
}

void addValue(int val)
{
	Node *n = new Node();
	n->x = val;
	n->next = head;
	head = n;
}

int popValue()
{
	Node *n = head;
	int ret = n->x;

	head = head->next;
	delete n;
	return ret;
}
