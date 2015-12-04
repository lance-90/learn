

template<typename type> void Queue<type>::destroy()
{
	while( !empty() )
		pop();
}


template<typename type> void Queue<type>::copy(const Queue &other)
{
	for( QueueItem<type> *p = other.head; p; p = p->next )
		pushItem(p->item);
}

template<typename type> void Queue<type>::pop()
{
	QueueItem<type> *p = head;
	head = head->next;
	delete p;
}

template<typename type> void Queue<type>::pushItem(const type &value)
{
	QueueItem<type> *p = new QueueItem<type>(value);
	if( empty() )
		head = tail = p;
	else {
		tail->next = p;
		tail = p;
	}
}


template<typename type> Queue<type>& Queue<type>::operator=(const Queue &other)
{
	destroy();
	copy(other);
}

template<typename type> ostream& operator<<(ostream& os, const Queue<type> &q)
{
	for(QueueItem<type> *p = q.head; p; p = p->next)
	{
		os<<p->item<<",";
	}
	os<<endl;
	return os;
}

