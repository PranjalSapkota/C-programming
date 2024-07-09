#include <stdio.h>
#include "cs50.h"
#include <string.h>
typedef struct 
{
 string name;
 string phone;
} person;

int main(void)
{
person people[3];

people[0].name ="PRANJAL";
people[0].phone="+977-9038029094";

people[1].name ="karna";
people[1].phone="+977-90374029094";

people[2].name ="Parshuram";
people[2].phone="+977-9038425064";

string names=get_string("Enter the name");

for (int  i = 0; i < 3; i++)
{
    if (strcmp(names,people[i].name ) == 0)
    {
        printf("%s\n",people[i].name);
        printf("%s\n",people[i].phone);
return 0;
    }
    
}

printf("Result not found");
return 1;
}