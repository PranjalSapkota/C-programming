#include <stdio.h>
#include <string.h>
#include "cs50.h"
int main (void)
{
    int l;
    string word= get_string("Enter any word:");
    l=strlen(word);
    for (int  i = 0; i <l ; i++)
    {
    if (word[i]>='a' && word[i]<='z')
        {
            word[i]-=32;
        }
        else
        {
            continue;
        }
    }
    printf("new string:%s",word);
    return  0;
}
    