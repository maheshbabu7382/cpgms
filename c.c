#include<stdio.h>
void main()
{
int counter,i;
for(counter=0,i=0; counter<=10,i<=10; counter++,i++)
if(counter==2 && i==6)
{
continue;
}
{
printf("%d%d\n", counter,i);
}
}
