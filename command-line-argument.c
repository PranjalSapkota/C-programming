#include <stdio.h>
#include <string.h>
#include "cs50.h"
int main( int argc ,string argv[])
{
  for (int  i = 1; i <= argc; i++)
  {
    printf("%s\t",argv[i]);
  }
  /* here we make our program more efficent because initially we donot know how many word user type so whatever the user
  type we return the same thing to the user in this program.
  Note:if we print invalid argv location then it return us null value.
  */
}
