#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

int funcTest( );



template <class T>
T maxValue(T valA, T valB)
{
	return valA > valB ? valA : valB;
}

template <class T>
void printValueSize( T val)
{
	cout<<sizeof(val);
}

void printOSInfo()
{
	int* p = NULL;
	int size = sizeof(p);
	if(size == 4)
	{
		cout<"32 wei os"<<endl;
	}
	else if(size == 8)
	{
		cout<<"62 wei os"<<endl;
	}
	else
	{
		cout<<"size: "<< size<<endl;
	}
}


int main()
{
	cout<<"hello world"<<endl;
	funcTest( );
	cout<<maxValue(5, 10)<<endl;
	int a = 5;
	double b = 3.2;
	cout<<"int size:";
	printValueSize(a);
	cout<<endl;
	cout<<"double size:";
	printValueSize(b);
	cout<<endl;
	printOSInfo();
	return 0;
}



int funcTest( )
{
	char buf[20];
	vector<string> vec;
	for( int i = 0; i < 10; ++i )
	{
		sprintf( buf, "wanggang %d", i );
		vec.push_back(string(buf));
	}

	for( vector<string>::iterator it = vec.begin(); it != vec.end(); ++it )
	{
		cout<<*it<<endl;
	}
	cout<< "Hello world"<<endl;
	return 0;
}
