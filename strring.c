#include <stdio.h>
#include <string.h>
#include "cs50.h"
int main(void)
{
  char *s,*t;
   s=get_string("s:\n");
   t=get_string("t\n");
     /* if (s==t)
     {
        printf("same");
    }
    else{
        printf("different");
    } */
   /* above comparison is wrong because string is pointer and it points the zeroth location of string .so variables s and
   t both points to the different location of memory where there contents are stored .or we can say they store the 
   address of zeroth location of the string .*/
    //correct way
if (strcmp(s,t) == 0)
{
    printf("same");
}
else
{
    printf("different");
}
}

    