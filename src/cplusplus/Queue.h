#ifndef _QUEUE_H
#define _QUEUE_H
#include <ostream>
using namespace std;

template <typename type> class Queue;
template <typename type> ostream& operator<<(ostream&, const Queue<type>&);

template <typename type>
class QueueItem
{
	friend ostream& operator<< <type>(ostream&, const Queue<type>&);
	friend class Queue<type>;
	QueueItem(const type& val): item(val), next(0){};
	type item;
	QueueItem* next;
};

template <typename type>
class Queue
{
	friend ostream& operator<< <type>(ostream&, const Queue<type>&);
public:
	Queue():head(0),tail(0){};
	Queue(const Queue &other):head(0),tail(0){copy(other);};
	~Queue(){destroy();};
	Queue& operator=(const Queue &other);


	bool empty(){return head == 0;};
	type& front(){return head->item;};
	const type& front()const {return head->item;};
	void pop();
	void pushItem(const type &value);
private:
	void copy(const Queue &other);
	void destroy();
	QueueItem<type> *head, *tail;
	
	
};

#include "Queue.cpp"
#endif
