
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char*argv[] )
{
	int cnt = 10000000;
	if(argc == 2)
	{
		sscanf(argv[1], "%d", &cnt);
	}
	
	printf( "the data size is: %d\n ", cnt );

	FILE *out = fopen( "../res/file.in", "w" );

	for (int i = 0; i < cnt; ++i )
	{
		fputc( 'a', out );
	}

	fclose(out);
	return 0;
}


void printLog( const char* msg, ... )
{
	printf( msg, ... );
}
