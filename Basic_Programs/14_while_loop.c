#include <stdio.h>

int main()
{
//loops in C programming
/*
while loop, do while loops, for loops
break, continue, goto statement

while (conditions)
{
  statement(s);
  Incrementation;
}*/
int n = 1, times = 5;

while(n<times)
{

  printf("C while loop:%d\n",n);
  n++;
  //n=n+1

}
return 0;
}
