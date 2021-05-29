#include <stdio.h>

/*
    You can use the fopen( ) function to create a new file
     or to open an existing file. This call will initialize an object of the type FILE, 
     which contains all the information necessary to control the stream. The prototype of this function call is as follows −

    FILE *fopen( const char * filename, const char * mode );
*/
main()
{
    FILE *fp;

    fp = fopen("/tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}

/*

Sr.No.	Mode & Description

1 r Opens an existing text file for reading purpose.

2 w Opens a text file for writing. If it does not exist, then a new file is created. 
  Here your program will start writing content from the beginning of the file.

3 a  Opens a text file for writing in appending mode. 
   If it does not exist, then a new file is created. 
   Here your program will start appending content in the existing file content.

4 r+ Opens a text file for both reading and writing.

5 w+ Opens a text file for both reading and writing.
   It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.

6 a+ Opens a text file for both reading and writing. 
   It creates the file if it does not exist. 
   The reading will start from the beginning but writing can only be appended.

*/