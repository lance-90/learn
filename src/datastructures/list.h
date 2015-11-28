
#ifndef _List_H

#ifndef ElementType
#define ElementType int
#endif


struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;


List makeEmpty(List l);
int isEmpty(List l);
int isLast(Position p, List l);
Position find(ElementType element, List l);
void remove(ElementType element, List l);
void insert(ElementType element, List l, Position p);
void deleteList(List l);
Position header(List l);
Position first(List l);
Position advance(List l);
ElementType retrieve(Position p);


#endif
