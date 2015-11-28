#include "list.h"
#include <stdlib.h>


struct Node
{
	ElementType	element;
	Position	next;
};


List makeEmpty(List l)
{
	if(l == NULL) return;
	Position p = l->next;
	while(p != NULL)
	{
		Position p1 = p;
		p = p->next;
		free(p1);
	}
	return l;
}

int isEmpty(List l)
{
	if(l->next == NULL)
		return 1;
	return 0;
}

int isLast(Position p, List l)
{
	if(p != l && p->next == NULL)
		return 1;
	return 0;
}

Position find(ElementType element, List l)
{
	Position p = l->next;
	while(p != NULL)
	{
		if(p->element == element)
			return p;
		p = p->next;
	}
	return NULL;
}

void remove(ElementType element, List l)
{
	Position p = l;
	while(p->next != NULL)
	{
		if(p->next->element == element)
		{
			Position p1 = p->next;
			p->next = p1->next;
			free(p1);
			continue;
		}
		p = p->next;
	}
}

void insert(ElementType element, List l, Position p)
{
	Position tempCell;
	tempCell = malloc(sizeof(struct Node));
	if(tempCell == NULL)
		FatalErro("out of space!!");
	tempCell->element = element;
	tempCell->next = p->next;
	p->next = tempCell;
}

void deleteList(List l)
{
	if(l == NULL) return;
	makeEmpty(l);
	free(l);
	l = NULL;
}

Position header(List l)
{
	return l;
}

Position first(List l)
{
	return l->next;
}

Position advance(List l)
{
	//ToFix:  本大人根本就不知道这个函数名是要干啥
}

ElementType retrieve(Position p)
{
	//ToFix:  本大人根本就不知道这个函数名是要干啥
	return 0;
}





