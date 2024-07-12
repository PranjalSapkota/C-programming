#include <stdio.h>
#include <string.h>
#include "cs50.h"
int main(void)
{
  char *s,*t;
   s=get_string("s:\n");
   t=get_string("t\n");
     if (s==t)
     {
        printf("same");
    }
    else{
        printf("different");
    }
}
    //  string s=get_string("s:");
// string t=get_string("t:");
// if (s == t)
// {
    // printf("same");
// }
// else 
// printf("different");
// }
