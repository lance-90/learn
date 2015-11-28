
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	FILE *in, *out;

	in = fopen("../res/file.in", "r" );
	out = fopen("../res/file.out", "w" );

	while( c=fgetc(in) != EOF )
		fputc(c, out);

	return 0;
}
