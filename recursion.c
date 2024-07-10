#include "cs50.h"
#include <stdio.h>
void pyramid( int height);
int main(void)
{
    int n=get_int("enter the no of rows required for pyrmaid");
    pyramid(n);
    return 0;
}
void pyramid (int height)
{
if (height<=0)
{
    return ;
}
pyramid (height -1);
for (int  i = 0; i < height; i++)
{
    printf("*");
}
printf("\n");
return;
}