
#include <stdio.h>

void main()
{
	 FILE *stream;
	 int i = 100;
	 char c = 'C';
	 float f = 1.234;
	// open a file for update
	 stream = fopen("c:\\windows\\desktop\\DUMMY.txt", "w+b");
	// write some data to the file
	 fprintf(stream, "%d %c %f", i, c, f);
	// close the file
	 fclose(stream);
}
