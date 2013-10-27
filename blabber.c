#include <stdio.h>
 
int main(void) 
{
int i, j, run;
char temp[9];
 
for(i=0; i<100; i++)
  { run=rand()%7 + 3;
    for(j=0; j< run ; j++)
      { temp[j]= rand()%26+'a'; }
    temp[run] = '\0';
    printf("%d %s\n",i + 1,temp); }
 
 
return 0;
}
