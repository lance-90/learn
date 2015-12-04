#include <iostream>
#include <string>
#include <stdio.h>
#include "Queue.h"


using namespace std;


int main()
{
	Queue<int> q1;
	for(int i = 0; i < 10; ++i )
		q1.pushItem(i);

	Queue<int> q2 = q1;
	Queue<string> q3;
	for(int i = 0; i < 10; ++i)
	{
		char buf[256];
		sprintf(buf, "wang%d", i);
		q3.pushItem(string(buf));
	}

	cout<<q1<<q2<<q3;	

	return 0;
}






