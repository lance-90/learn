
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int block[1024];
	FILE *in, *out;

	in = fopen("../res/file.in", "r" );
	out = fopen("../res/file.out", "w" );

	int items = 0;
	while( 1 )
	{
		items = fread( block, sizeof(block), 1, in );
		fwrite( block, sizeof(block), 1, out );
		if (items < 1)
			break;
	}


	return 0;
}
