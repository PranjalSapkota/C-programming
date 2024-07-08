#include <stdio.h>
#include <string.h>
#include "cs50.h"
int main( int argc , string argv[])
{
  for (int  i = 1; i < argc; i++)
  {
    printf("%s\t",argv[i]);
  }
  printf("%d",argc);
  return 0;
  /* Point to be noted:argc returns the total no of argument vector.it means it also includes the argv of location 0 so
  total no becomes 1 more than the actual string that human type in the prompt.*/
}
