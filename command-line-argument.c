#include <stdio.h>
#include <string.h>
#include "cs50.h"
int main( int argc ,string argv[])
/* here argc is a argument count which count how many words human type at the prompt.similarly argv is a argument vector 
which list the command line argument.
whatevers the name of your program is always accessible in argv at location 0. */

{
  printf("hello,%s\n",argv[1]);
}
